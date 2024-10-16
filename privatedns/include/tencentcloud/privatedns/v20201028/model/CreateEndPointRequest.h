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

#ifndef TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_CREATEENDPOINTREQUEST_H_
#define TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_CREATEENDPOINTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Privatedns
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * CreateEndPoint请求参数结构体
                */
                class CreateEndPointRequest : public AbstractModel
                {
                public:
                    CreateEndPointRequest();
                    ~CreateEndPointRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取终端节点名称
                     * @return EndPointName 终端节点名称
                     * 
                     */
                    std::string GetEndPointName() const;

                    /**
                     * 设置终端节点名称
                     * @param _endPointName 终端节点名称
                     * 
                     */
                    void SetEndPointName(const std::string& _endPointName);

                    /**
                     * 判断参数 EndPointName 是否已赋值
                     * @return EndPointName 是否已赋值
                     * 
                     */
                    bool EndPointNameHasBeenSet() const;

                    /**
                     * 获取终端节点服务ID（vpc终端节点服务ID）
                     * @return EndPointServiceId 终端节点服务ID（vpc终端节点服务ID）
                     * 
                     */
                    std::string GetEndPointServiceId() const;

                    /**
                     * 设置终端节点服务ID（vpc终端节点服务ID）
                     * @param _endPointServiceId 终端节点服务ID（vpc终端节点服务ID）
                     * 
                     */
                    void SetEndPointServiceId(const std::string& _endPointServiceId);

                    /**
                     * 判断参数 EndPointServiceId 是否已赋值
                     * @return EndPointServiceId 是否已赋值
                     * 
                     */
                    bool EndPointServiceIdHasBeenSet() const;

                    /**
                     * 获取终端节点地域，必须要和终端节点服务所属地域一致
                     * @return EndPointRegion 终端节点地域，必须要和终端节点服务所属地域一致
                     * 
                     */
                    std::string GetEndPointRegion() const;

                    /**
                     * 设置终端节点地域，必须要和终端节点服务所属地域一致
                     * @param _endPointRegion 终端节点地域，必须要和终端节点服务所属地域一致
                     * 
                     */
                    void SetEndPointRegion(const std::string& _endPointRegion);

                    /**
                     * 判断参数 EndPointRegion 是否已赋值
                     * @return EndPointRegion 是否已赋值
                     * 
                     */
                    bool EndPointRegionHasBeenSet() const;

                    /**
                     * 获取终端节点ip数量
                     * @return IpNum 终端节点ip数量
                     * 
                     */
                    int64_t GetIpNum() const;

                    /**
                     * 设置终端节点ip数量
                     * @param _ipNum 终端节点ip数量
                     * 
                     */
                    void SetIpNum(const int64_t& _ipNum);

                    /**
                     * 判断参数 IpNum 是否已赋值
                     * @return IpNum 是否已赋值
                     * 
                     */
                    bool IpNumHasBeenSet() const;

                private:

                    /**
                     * 终端节点名称
                     */
                    std::string m_endPointName;
                    bool m_endPointNameHasBeenSet;

                    /**
                     * 终端节点服务ID（vpc终端节点服务ID）
                     */
                    std::string m_endPointServiceId;
                    bool m_endPointServiceIdHasBeenSet;

                    /**
                     * 终端节点地域，必须要和终端节点服务所属地域一致
                     */
                    std::string m_endPointRegion;
                    bool m_endPointRegionHasBeenSet;

                    /**
                     * 终端节点ip数量
                     */
                    int64_t m_ipNum;
                    bool m_ipNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_CREATEENDPOINTREQUEST_H_
