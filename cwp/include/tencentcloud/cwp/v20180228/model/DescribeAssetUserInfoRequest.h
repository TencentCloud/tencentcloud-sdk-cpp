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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEASSETUSERINFOREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEASSETUSERINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeAssetUserInfo请求参数结构体
                */
                class DescribeAssetUserInfoRequest : public AbstractModel
                {
                public:
                    DescribeAssetUserInfoRequest();
                    ~DescribeAssetUserInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取云服务器UUID
                     * @return Quuid 云服务器UUID
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置云服务器UUID
                     * @param _quuid 云服务器UUID
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取主机安全UUID
                     * @return Uuid 主机安全UUID
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置主机安全UUID
                     * @param _uuid 主机安全UUID
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取账户名
                     * @return Name 账户名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置账户名
                     * @param _name 账户名
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * 云服务器UUID
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * 主机安全UUID
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * 账户名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEASSETUSERINFOREQUEST_H_
