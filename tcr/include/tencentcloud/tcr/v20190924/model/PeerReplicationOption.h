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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_PEERREPLICATIONOPTION_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_PEERREPLICATIONOPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * 跨主账号实例同步参数
                */
                class PeerReplicationOption : public AbstractModel
                {
                public:
                    PeerReplicationOption();
                    ~PeerReplicationOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取待同步实例的uin
                     * @return PeerRegistryUin 待同步实例的uin
                     * 
                     */
                    std::string GetPeerRegistryUin() const;

                    /**
                     * 设置待同步实例的uin
                     * @param _peerRegistryUin 待同步实例的uin
                     * 
                     */
                    void SetPeerRegistryUin(const std::string& _peerRegistryUin);

                    /**
                     * 判断参数 PeerRegistryUin 是否已赋值
                     * @return PeerRegistryUin 是否已赋值
                     * 
                     */
                    bool PeerRegistryUinHasBeenSet() const;

                    /**
                     * 获取待同步实例的访问永久Token
                     * @return PeerRegistryToken 待同步实例的访问永久Token
                     * 
                     */
                    std::string GetPeerRegistryToken() const;

                    /**
                     * 设置待同步实例的访问永久Token
                     * @param _peerRegistryToken 待同步实例的访问永久Token
                     * 
                     */
                    void SetPeerRegistryToken(const std::string& _peerRegistryToken);

                    /**
                     * 判断参数 PeerRegistryToken 是否已赋值
                     * @return PeerRegistryToken 是否已赋值
                     * 
                     */
                    bool PeerRegistryTokenHasBeenSet() const;

                    /**
                     * 获取是否开启跨主账号实例同步
                     * @return EnablePeerReplication 是否开启跨主账号实例同步
                     * 
                     */
                    bool GetEnablePeerReplication() const;

                    /**
                     * 设置是否开启跨主账号实例同步
                     * @param _enablePeerReplication 是否开启跨主账号实例同步
                     * 
                     */
                    void SetEnablePeerReplication(const bool& _enablePeerReplication);

                    /**
                     * 判断参数 EnablePeerReplication 是否已赋值
                     * @return EnablePeerReplication 是否已赋值
                     * 
                     */
                    bool EnablePeerReplicationHasBeenSet() const;

                private:

                    /**
                     * 待同步实例的uin
                     */
                    std::string m_peerRegistryUin;
                    bool m_peerRegistryUinHasBeenSet;

                    /**
                     * 待同步实例的访问永久Token
                     */
                    std::string m_peerRegistryToken;
                    bool m_peerRegistryTokenHasBeenSet;

                    /**
                     * 是否开启跨主账号实例同步
                     */
                    bool m_enablePeerReplication;
                    bool m_enablePeerReplicationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_PEERREPLICATIONOPTION_H_
