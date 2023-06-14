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

#ifndef TENCENTCLOUD_BM_V20180423_MODEL_MODIFYUSERCMDREQUEST_H_
#define TENCENTCLOUD_BM_V20180423_MODEL_MODIFYUSERCMDREQUEST_H_

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
                * ModifyUserCmd请求参数结构体
                */
                class ModifyUserCmdRequest : public AbstractModel
                {
                public:
                    ModifyUserCmdRequest();
                    ~ModifyUserCmdRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待修改的脚本ID
                     * @return CmdId 待修改的脚本ID
                     * 
                     */
                    std::string GetCmdId() const;

                    /**
                     * 设置待修改的脚本ID
                     * @param _cmdId 待修改的脚本ID
                     * 
                     */
                    void SetCmdId(const std::string& _cmdId);

                    /**
                     * 判断参数 CmdId 是否已赋值
                     * @return CmdId 是否已赋值
                     * 
                     */
                    bool CmdIdHasBeenSet() const;

                    /**
                     * 获取待修改的脚本名称
                     * @return Alias 待修改的脚本名称
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置待修改的脚本名称
                     * @param _alias 待修改的脚本名称
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
                     * 获取脚本适用的操作系统类型
                     * @return OsType 脚本适用的操作系统类型
                     * 
                     */
                    std::string GetOsType() const;

                    /**
                     * 设置脚本适用的操作系统类型
                     * @param _osType 脚本适用的操作系统类型
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
                     * 获取待修改的脚本内容，必须经过base64编码
                     * @return Content 待修改的脚本内容，必须经过base64编码
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置待修改的脚本内容，必须经过base64编码
                     * @param _content 待修改的脚本内容，必须经过base64编码
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
                     * 待修改的脚本ID
                     */
                    std::string m_cmdId;
                    bool m_cmdIdHasBeenSet;

                    /**
                     * 待修改的脚本名称
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * 脚本适用的操作系统类型
                     */
                    std::string m_osType;
                    bool m_osTypeHasBeenSet;

                    /**
                     * 待修改的脚本内容，必须经过base64编码
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BM_V20180423_MODEL_MODIFYUSERCMDREQUEST_H_
