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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMIP_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMIP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/DspmArea.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Dspm Ip信息
                */
                class DspmIp : public AbstractModel
                {
                public:
                    DspmIp();
                    ~DspmIp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ip地址
                     * @return Ip ip地址
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置ip地址
                     * @param _ip ip地址
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取ip类型。public-公网 private-内网
                     * @return IpType ip类型。public-公网 private-内网
                     * 
                     */
                    std::string GetIpType() const;

                    /**
                     * 设置ip类型。public-公网 private-内网
                     * @param _ipType ip类型。public-公网 private-内网
                     * 
                     */
                    void SetIpType(const std::string& _ipType);

                    /**
                     * 判断参数 IpType 是否已赋值
                     * @return IpType 是否已赋值
                     * 
                     */
                    bool IpTypeHasBeenSet() const;

                    /**
                     * 获取ip标记信息
                     * @return Remark ip标记信息
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置ip标记信息
                     * @param _remark ip标记信息
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取是否已经标记信息
                     * @return IsRemarked 是否已经标记信息
                     * 
                     */
                    int64_t GetIsRemarked() const;

                    /**
                     * 设置是否已经标记信息
                     * @param _isRemarked 是否已经标记信息
                     * 
                     */
                    void SetIsRemarked(const int64_t& _isRemarked);

                    /**
                     * 判断参数 IsRemarked 是否已赋值
                     * @return IsRemarked 是否已赋值
                     * 
                     */
                    bool IsRemarkedHasBeenSet() const;

                    /**
                     * 获取ip归属实例id
                     * @return ResourceInstanceId ip归属实例id
                     * 
                     */
                    std::string GetResourceInstanceId() const;

                    /**
                     * 设置ip归属实例id
                     * @param _resourceInstanceId ip归属实例id
                     * 
                     */
                    void SetResourceInstanceId(const std::string& _resourceInstanceId);

                    /**
                     * 判断参数 ResourceInstanceId 是否已赋值
                     * @return ResourceInstanceId 是否已赋值
                     * 
                     */
                    bool ResourceInstanceIdHasBeenSet() const;

                    /**
                     * 获取ip所属产品
                     * @return ResourceType ip所属产品
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置ip所属产品
                     * @param _resourceType ip所属产品
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取ip所属地域
                     * @return Area ip所属地域
                     * 
                     */
                    DspmArea GetArea() const;

                    /**
                     * 设置ip所属地域
                     * @param _area ip所属地域
                     * 
                     */
                    void SetArea(const DspmArea& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取是否新ip地址
                     * @return IsNewIp 是否新ip地址
                     * 
                     */
                    int64_t GetIsNewIp() const;

                    /**
                     * 设置是否新ip地址
                     * @param _isNewIp 是否新ip地址
                     * 
                     */
                    void SetIsNewIp(const int64_t& _isNewIp);

                    /**
                     * 判断参数 IsNewIp 是否已赋值
                     * @return IsNewIp 是否已赋值
                     * 
                     */
                    bool IsNewIpHasBeenSet() const;

                private:

                    /**
                     * ip地址
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * ip类型。public-公网 private-内网
                     */
                    std::string m_ipType;
                    bool m_ipTypeHasBeenSet;

                    /**
                     * ip标记信息
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 是否已经标记信息
                     */
                    int64_t m_isRemarked;
                    bool m_isRemarkedHasBeenSet;

                    /**
                     * ip归属实例id
                     */
                    std::string m_resourceInstanceId;
                    bool m_resourceInstanceIdHasBeenSet;

                    /**
                     * ip所属产品
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * ip所属地域
                     */
                    DspmArea m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 是否新ip地址
                     */
                    int64_t m_isNewIp;
                    bool m_isNewIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMIP_H_
