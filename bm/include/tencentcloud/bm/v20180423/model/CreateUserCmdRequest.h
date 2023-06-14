/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_BM_V20180423_MODEL_CREATEUSERCMDREQUEST_H_
#define TENCENTCLOUD_BM_V20180423_MODEL_CREATEUSERCMDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bm
    {
        namespace V20180423
        {
            namespace Model
            {
                /**
                * CreateUserCmd请求参数结构体
                */
                class CreateUserCmdRequest : public AbstractModel
                {
                public:
                    CreateUserCmdRequest();
                    ~CreateUserCmdRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用户自定义脚本的名称
                     * @return Alias 用户自定义脚本的名称
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置用户自定义脚本的名称
                     * @param _alias 用户自定义脚本的名称
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取命令适用的操作系统类型，取值linux或xserver
                     * @return OsType 命令适用的操作系统类型，取值linux或xserver
                     * 
                     */
                    std::string GetOsType() const;

                    /**
                     * 设置命令适用的操作系统类型，取值linux或xserver
                     * @param _osType 命令适用的操作系统类型，取值linux或xserver
                     * 
                     */
                    void SetOsType(const std::string& _osType);

                    /**
                     * 判断参数 OsType 是否已赋值
                     * @return OsType 是否已赋值
                     * 
                     */
                    bool OsTypeHasBeenSet() const;

                    /**
                     * 获取脚本内容，必须经过base64编码
                     * @return Content 脚本内容，必须经过base64编码
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置脚本内容，必须经过base64编码
                     * @param _content 脚本内容，必须经过base64编码
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                private:

                    /**
                     * 用户自定义脚本的名称
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * 命令适用的操作系统类型，取值linux或xserver
                     */
                    std::string m_osType;
                    bool m_osTypeHasBeenSet;

                    /**
                     * 脚本内容，必须经过base64编码
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BM_V20180423_MODEL_CREATEUSERCMDREQUEST_H_
