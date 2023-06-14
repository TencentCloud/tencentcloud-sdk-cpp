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

#ifndef TENCENTCLOUD_WSS_V20180426_MODEL_DELETECERTREQUEST_H_
#define TENCENTCLOUD_WSS_V20180426_MODEL_DELETECERTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wss
    {
        namespace V20180426
        {
            namespace Model
            {
                /**
                * DeleteCert请求参数结构体
                */
                class DeleteCertRequest : public AbstractModel
                {
                public:
                    DeleteCertRequest();
                    ~DeleteCertRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取证书 ID，即通过 GetList 拿到的证书列表的 ID 字段。
                     * @return Id 证书 ID，即通过 GetList 拿到的证书列表的 ID 字段。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置证书 ID，即通过 GetList 拿到的证书列表的 ID 字段。
                     * @param _id 证书 ID，即通过 GetList 拿到的证书列表的 ID 字段。
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取模块名称，应填 ssl。
                     * @return ModuleType 模块名称，应填 ssl。
                     * 
                     */
                    std::string GetModuleType() const;

                    /**
                     * 设置模块名称，应填 ssl。
                     * @param _moduleType 模块名称，应填 ssl。
                     * 
                     */
                    void SetModuleType(const std::string& _moduleType);

                    /**
                     * 判断参数 ModuleType 是否已赋值
                     * @return ModuleType 是否已赋值
                     * 
                     */
                    bool ModuleTypeHasBeenSet() const;

                private:

                    /**
                     * 证书 ID，即通过 GetList 拿到的证书列表的 ID 字段。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 模块名称，应填 ssl。
                     */
                    std::string m_moduleType;
                    bool m_moduleTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WSS_V20180426_MODEL_DELETECERTREQUEST_H_
