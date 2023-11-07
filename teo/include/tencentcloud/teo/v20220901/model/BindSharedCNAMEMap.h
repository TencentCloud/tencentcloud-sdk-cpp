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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_BINDSHAREDCNAMEMAP_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_BINDSHAREDCNAMEMAP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 共享 CNAME 和接入域名的绑定关系
                */
                class BindSharedCNAMEMap : public AbstractModel
                {
                public:
                    BindSharedCNAMEMap();
                    ~BindSharedCNAMEMap() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取需要绑定或解绑的共享 CNAME。
                     * @return SharedCNAME 需要绑定或解绑的共享 CNAME。
                     * 
                     */
                    std::string GetSharedCNAME() const;

                    /**
                     * 设置需要绑定或解绑的共享 CNAME。
                     * @param _sharedCNAME 需要绑定或解绑的共享 CNAME。
                     * 
                     */
                    void SetSharedCNAME(const std::string& _sharedCNAME);

                    /**
                     * 判断参数 SharedCNAME 是否已赋值
                     * @return SharedCNAME 是否已赋值
                     * 
                     */
                    bool SharedCNAMEHasBeenSet() const;

                    /**
                     * 获取加速域名，可传递多个，最多20个。
                     * @return DomainNames 加速域名，可传递多个，最多20个。
                     * 
                     */
                    std::vector<std::string> GetDomainNames() const;

                    /**
                     * 设置加速域名，可传递多个，最多20个。
                     * @param _domainNames 加速域名，可传递多个，最多20个。
                     * 
                     */
                    void SetDomainNames(const std::vector<std::string>& _domainNames);

                    /**
                     * 判断参数 DomainNames 是否已赋值
                     * @return DomainNames 是否已赋值
                     * 
                     */
                    bool DomainNamesHasBeenSet() const;

                private:

                    /**
                     * 需要绑定或解绑的共享 CNAME。
                     */
                    std::string m_sharedCNAME;
                    bool m_sharedCNAMEHasBeenSet;

                    /**
                     * 加速域名，可传递多个，最多20个。
                     */
                    std::vector<std::string> m_domainNames;
                    bool m_domainNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_BINDSHAREDCNAMEMAP_H_
