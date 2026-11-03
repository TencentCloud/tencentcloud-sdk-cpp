/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TCBR_V20220217_MODEL_INITIALIZECLOUDRUNRESOURCEREQUEST_H_
#define TENCENTCLOUD_TCBR_V20220217_MODEL_INITIALIZECLOUDRUNRESOURCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcbr
    {
        namespace V20220217
        {
            namespace Model
            {
                /**
                * InitializeCloudRunResource请求参数结构体
                */
                class InitializeCloudRunResourceRequest : public AbstractModel
                {
                public:
                    InitializeCloudRunResourceRequest();
                    ~InitializeCloudRunResourceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>tcbr,run,weda,baas</p>
                     * @return EnvType <p>tcbr,run,weda,baas</p>
                     * 
                     */
                    std::string GetEnvType() const;

                    /**
                     * 设置<p>tcbr,run,weda,baas</p>
                     * @param _envType <p>tcbr,run,weda,baas</p>
                     * 
                     */
                    void SetEnvType(const std::string& _envType);

                    /**
                     * 判断参数 EnvType 是否已赋值
                     * @return EnvType 是否已赋值
                     * 
                     */
                    bool EnvTypeHasBeenSet() const;

                    /**
                     * 获取<p>环境ID 云开发平台必填</p>
                     * @return EnvId <p>环境ID 云开发平台必填</p>
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置<p>环境ID 云开发平台必填</p>
                     * @param _envId <p>环境ID 云开发平台必填</p>
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取<p>私有网络Id</p>
                     * @return VpcId <p>私有网络Id</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>私有网络Id</p>
                     * @param _vpcId <p>私有网络Id</p>
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取<p>子网列表</p>
                     * @return SubNetIds <p>子网列表</p>
                     * 
                     */
                    std::vector<std::string> GetSubNetIds() const;

                    /**
                     * 设置<p>子网列表</p>
                     * @param _subNetIds <p>子网列表</p>
                     * 
                     */
                    void SetSubNetIds(const std::vector<std::string>& _subNetIds);

                    /**
                     * 判断参数 SubNetIds 是否已赋值
                     * @return SubNetIds 是否已赋值
                     * 
                     */
                    bool SubNetIdsHasBeenSet() const;

                    /**
                     * 获取<p>来源：wechat | cloud | weda</p>
                     * @return Source <p>来源：wechat | cloud | weda</p>
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置<p>来源：wechat | cloud | weda</p>
                     * @param _source <p>来源：wechat | cloud | weda</p>
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取<p>渠道：wechat | cloud | weda</p>
                     * @return Channel <p>渠道：wechat | cloud | weda</p>
                     * 
                     */
                    std::string GetChannel() const;

                    /**
                     * 设置<p>渠道：wechat | cloud | weda</p>
                     * @param _channel <p>渠道：wechat | cloud | weda</p>
                     * 
                     */
                    void SetChannel(const std::string& _channel);

                    /**
                     * 判断参数 Channel 是否已赋值
                     * @return Channel 是否已赋值
                     * 
                     */
                    bool ChannelHasBeenSet() const;

                private:

                    /**
                     * <p>tcbr,run,weda,baas</p>
                     */
                    std::string m_envType;
                    bool m_envTypeHasBeenSet;

                    /**
                     * <p>环境ID 云开发平台必填</p>
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * <p>私有网络Id</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>子网列表</p>
                     */
                    std::vector<std::string> m_subNetIds;
                    bool m_subNetIdsHasBeenSet;

                    /**
                     * <p>来源：wechat | cloud | weda</p>
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * <p>渠道：wechat | cloud | weda</p>
                     */
                    std::string m_channel;
                    bool m_channelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCBR_V20220217_MODEL_INITIALIZECLOUDRUNRESOURCEREQUEST_H_
