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

#ifndef TENCENTCLOUD_TBAAS_V20180416_MODEL_APPLYCHAINMAKERBATCHUSERCERTREQUEST_H_
#define TENCENTCLOUD_TBAAS_V20180416_MODEL_APPLYCHAINMAKERBATCHUSERCERTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tbaas/v20180416/model/SignCertCsr.h>


namespace TencentCloud
{
    namespace Tbaas
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * ApplyChainMakerBatchUserCert请求参数结构体
                */
                class ApplyChainMakerBatchUserCertRequest : public AbstractModel
                {
                public:
                    ApplyChainMakerBatchUserCertRequest();
                    ~ApplyChainMakerBatchUserCertRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取网络ID，可在区块链网络详情或列表中获取
                     * @return ClusterId 网络ID，可在区块链网络详情或列表中获取
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置网络ID，可在区块链网络详情或列表中获取
                     * @param _clusterId 网络ID，可在区块链网络详情或列表中获取
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取证书标识和证书请求文件，可参考TBaaS证书生成相关文档生成证书请求文件
                     * @return SignUserCsrList 证书标识和证书请求文件，可参考TBaaS证书生成相关文档生成证书请求文件
                     * 
                     */
                    std::vector<SignCertCsr> GetSignUserCsrList() const;

                    /**
                     * 设置证书标识和证书请求文件，可参考TBaaS证书生成相关文档生成证书请求文件
                     * @param _signUserCsrList 证书标识和证书请求文件，可参考TBaaS证书生成相关文档生成证书请求文件
                     * 
                     */
                    void SetSignUserCsrList(const std::vector<SignCertCsr>& _signUserCsrList);

                    /**
                     * 判断参数 SignUserCsrList 是否已赋值
                     * @return SignUserCsrList 是否已赋值
                     * 
                     */
                    bool SignUserCsrListHasBeenSet() const;

                private:

                    /**
                     * 网络ID，可在区块链网络详情或列表中获取
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 证书标识和证书请求文件，可参考TBaaS证书生成相关文档生成证书请求文件
                     */
                    std::vector<SignCertCsr> m_signUserCsrList;
                    bool m_signUserCsrListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBAAS_V20180416_MODEL_APPLYCHAINMAKERBATCHUSERCERTREQUEST_H_
