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

#ifndef TENCENTCLOUD_TBAAS_V20180416_MODEL_PEERSET_H_
#define TENCENTCLOUD_TBAAS_V20180416_MODEL_PEERSET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tbaas
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * PeerSet
                */
                class PeerSet : public AbstractModel
                {
                public:
                    PeerSet();
                    ~PeerSet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取节点名称
                     * @return PeerName 节点名称
                     * 
                     */
                    std::string GetPeerName() const;

                    /**
                     * 设置节点名称
                     * @param _peerName 节点名称
                     * 
                     */
                    void SetPeerName(const std::string& _peerName);

                    /**
                     * 判断参数 PeerName 是否已赋值
                     * @return PeerName 是否已赋值
                     * 
                     */
                    bool PeerNameHasBeenSet() const;

                    /**
                     * 获取组织名称
                     * @return OrgName 组织名称
                     * 
                     */
                    std::string GetOrgName() const;

                    /**
                     * 设置组织名称
                     * @param _orgName 组织名称
                     * 
                     */
                    void SetOrgName(const std::string& _orgName);

                    /**
                     * 判断参数 OrgName 是否已赋值
                     * @return OrgName 是否已赋值
                     * 
                     */
                    bool OrgNameHasBeenSet() const;

                private:

                    /**
                     * 节点名称
                     */
                    std::string m_peerName;
                    bool m_peerNameHasBeenSet;

                    /**
                     * 组织名称
                     */
                    std::string m_orgName;
                    bool m_orgNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBAAS_V20180416_MODEL_PEERSET_H_
