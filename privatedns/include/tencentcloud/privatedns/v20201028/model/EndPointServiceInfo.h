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

#ifndef TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_ENDPOINTSERVICEINFO_H_
#define TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_ENDPOINTSERVICEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 终端节点信息
                */
                class EndPointServiceInfo : public AbstractModel
                {
                public:
                    EndPointServiceInfo();
                    ~EndPointServiceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ip
                     * @return EndPointVip ip
                     * 
                     */
                    std::string GetEndPointVip() const;

                    /**
                     * 设置ip
                     * @param _endPointVip ip
                     * 
                     */
                    void SetEndPointVip(const std::string& _endPointVip);

                    /**
                     * 判断参数 EndPointVip 是否已赋值
                     * @return EndPointVip 是否已赋值
                     * 
                     */
                    bool EndPointVipHasBeenSet() const;

                    /**
                     * 获取子网id
                     * @return UniqSubnetId 子网id
                     * 
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置子网id
                     * @param _uniqSubnetId 子网id
                     * 
                     */
                    void SetUniqSubnetId(const std::string& _uniqSubnetId);

                    /**
                     * 判断参数 UniqSubnetId 是否已赋值
                     * @return UniqSubnetId 是否已赋值
                     * 
                     */
                    bool UniqSubnetIdHasBeenSet() const;

                    /**
                     * 获取网络侧状态，0 可用，1 待接受，3 拒绝
                     * @return EndPointState 网络侧状态，0 可用，1 待接受，3 拒绝
                     * 
                     */
                    uint64_t GetEndPointState() const;

                    /**
                     * 设置网络侧状态，0 可用，1 待接受，3 拒绝
                     * @param _endPointState 网络侧状态，0 可用，1 待接受，3 拒绝
                     * 
                     */
                    void SetEndPointState(const uint64_t& _endPointState);

                    /**
                     * 判断参数 EndPointState 是否已赋值
                     * @return EndPointState 是否已赋值
                     * 
                     */
                    bool EndPointStateHasBeenSet() const;

                    /**
                     * 获取状态，1表示可用，0表示删除
                     * @return EndPointStatus 状态，1表示可用，0表示删除
                     * 
                     */
                    uint64_t GetEndPointStatus() const;

                    /**
                     * 设置状态，1表示可用，0表示删除
                     * @param _endPointStatus 状态，1表示可用，0表示删除
                     * 
                     */
                    void SetEndPointStatus(const uint64_t& _endPointStatus);

                    /**
                     * 判断参数 EndPointStatus 是否已赋值
                     * @return EndPointStatus 是否已赋值
                     * 
                     */
                    bool EndPointStatusHasBeenSet() const;

                    /**
                     * 获取备注信息
                     * @return EndPointRemark 备注信息
                     * 
                     */
                    std::string GetEndPointRemark() const;

                    /**
                     * 设置备注信息
                     * @param _endPointRemark 备注信息
                     * 
                     */
                    void SetEndPointRemark(const std::string& _endPointRemark);

                    /**
                     * 判断参数 EndPointRemark 是否已赋值
                     * @return EndPointRemark 是否已赋值
                     * 
                     */
                    bool EndPointRemarkHasBeenSet() const;

                    /**
                     * 获取网络侧隔离状态，1：已隔离，0：未隔离
                     * @return EndPointIsolateFlag 网络侧隔离状态，1：已隔离，0：未隔离
                     * 
                     */
                    uint64_t GetEndPointIsolateFlag() const;

                    /**
                     * 设置网络侧隔离状态，1：已隔离，0：未隔离
                     * @param _endPointIsolateFlag 网络侧隔离状态，1：已隔离，0：未隔离
                     * 
                     */
                    void SetEndPointIsolateFlag(const uint64_t& _endPointIsolateFlag);

                    /**
                     * 判断参数 EndPointIsolateFlag 是否已赋值
                     * @return EndPointIsolateFlag 是否已赋值
                     * 
                     */
                    bool EndPointIsolateFlagHasBeenSet() const;

                private:

                    /**
                     * ip
                     */
                    std::string m_endPointVip;
                    bool m_endPointVipHasBeenSet;

                    /**
                     * 子网id
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                    /**
                     * 网络侧状态，0 可用，1 待接受，3 拒绝
                     */
                    uint64_t m_endPointState;
                    bool m_endPointStateHasBeenSet;

                    /**
                     * 状态，1表示可用，0表示删除
                     */
                    uint64_t m_endPointStatus;
                    bool m_endPointStatusHasBeenSet;

                    /**
                     * 备注信息
                     */
                    std::string m_endPointRemark;
                    bool m_endPointRemarkHasBeenSet;

                    /**
                     * 网络侧隔离状态，1：已隔离，0：未隔离
                     */
                    uint64_t m_endPointIsolateFlag;
                    bool m_endPointIsolateFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_ENDPOINTSERVICEINFO_H_
