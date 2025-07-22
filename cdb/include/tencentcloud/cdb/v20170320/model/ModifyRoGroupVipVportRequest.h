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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYROGROUPVIPVPORTREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYROGROUPVIPVPORTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * ModifyRoGroupVipVport请求参数结构体
                */
                class ModifyRoGroupVipVportRequest : public AbstractModel
                {
                public:
                    ModifyRoGroupVipVportRequest();
                    ~ModifyRoGroupVipVportRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取RO组的ID。
                     * @return UGroupId RO组的ID。
                     * 
                     */
                    std::string GetUGroupId() const;

                    /**
                     * 设置RO组的ID。
                     * @param _uGroupId RO组的ID。
                     * 
                     */
                    void SetUGroupId(const std::string& _uGroupId);

                    /**
                     * 判断参数 UGroupId 是否已赋值
                     * @return UGroupId 是否已赋值
                     * 
                     */
                    bool UGroupIdHasBeenSet() const;

                    /**
                     * 获取目标IP。
                     * @return DstIp 目标IP。
                     * 
                     */
                    std::string GetDstIp() const;

                    /**
                     * 设置目标IP。
                     * @param _dstIp 目标IP。
                     * 
                     */
                    void SetDstIp(const std::string& _dstIp);

                    /**
                     * 判断参数 DstIp 是否已赋值
                     * @return DstIp 是否已赋值
                     * 
                     */
                    bool DstIpHasBeenSet() const;

                    /**
                     * 获取目标Port。
                     * @return DstPort 目标Port。
                     * 
                     */
                    int64_t GetDstPort() const;

                    /**
                     * 设置目标Port。
                     * @param _dstPort 目标Port。
                     * 
                     */
                    void SetDstPort(const int64_t& _dstPort);

                    /**
                     * 判断参数 DstPort 是否已赋值
                     * @return DstPort 是否已赋值
                     * 
                     */
                    bool DstPortHasBeenSet() const;

                private:

                    /**
                     * RO组的ID。
                     */
                    std::string m_uGroupId;
                    bool m_uGroupIdHasBeenSet;

                    /**
                     * 目标IP。
                     */
                    std::string m_dstIp;
                    bool m_dstIpHasBeenSet;

                    /**
                     * 目标Port。
                     */
                    int64_t m_dstPort;
                    bool m_dstPortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYROGROUPVIPVPORTREQUEST_H_
