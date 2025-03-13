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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SALEZONE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SALEZONE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 售卖可用区信息
                */
                class SaleZone : public AbstractModel
                {
                public:
                    SaleZone();
                    ~SaleZone() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取可用区英文名
                     * @return Zone 可用区英文名
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区英文名
                     * @param _zone 可用区英文名
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取可用区数字ID
                     * @return ZoneId 可用区数字ID
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置可用区数字ID
                     * @param _zoneId 可用区数字ID
                     * 
                     */
                    void SetZoneId(const int64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取可用区中文名
                     * @return ZoneZh 可用区中文名
                     * 
                     */
                    std::string GetZoneZh() const;

                    /**
                     * 设置可用区中文名
                     * @param _zoneZh 可用区中文名
                     * 
                     */
                    void SetZoneZh(const std::string& _zoneZh);

                    /**
                     * 判断参数 ZoneZh 是否已赋值
                     * @return ZoneZh 是否已赋值
                     * 
                     */
                    bool ZoneZhHasBeenSet() const;

                    /**
                     * 获取是否支持serverless集群<br>
0:不支持<br>
1:支持
                     * @return IsSupportServerless 是否支持serverless集群<br>
0:不支持<br>
1:支持
                     * 
                     */
                    int64_t GetIsSupportServerless() const;

                    /**
                     * 设置是否支持serverless集群<br>
0:不支持<br>
1:支持
                     * @param _isSupportServerless 是否支持serverless集群<br>
0:不支持<br>
1:支持
                     * 
                     */
                    void SetIsSupportServerless(const int64_t& _isSupportServerless);

                    /**
                     * 判断参数 IsSupportServerless 是否已赋值
                     * @return IsSupportServerless 是否已赋值
                     * 
                     */
                    bool IsSupportServerlessHasBeenSet() const;

                    /**
                     * 获取是否支持普通集群<br>
0:不支持<br>
1:支持
                     * @return IsSupportNormal 是否支持普通集群<br>
0:不支持<br>
1:支持
                     * 
                     */
                    int64_t GetIsSupportNormal() const;

                    /**
                     * 设置是否支持普通集群<br>
0:不支持<br>
1:支持
                     * @param _isSupportNormal 是否支持普通集群<br>
0:不支持<br>
1:支持
                     * 
                     */
                    void SetIsSupportNormal(const int64_t& _isSupportNormal);

                    /**
                     * 判断参数 IsSupportNormal 是否已赋值
                     * @return IsSupportNormal 是否已赋值
                     * 
                     */
                    bool IsSupportNormalHasBeenSet() const;

                    /**
                     * 获取物理区
                     * @return PhysicalZone 物理区
                     * 
                     */
                    std::string GetPhysicalZone() const;

                    /**
                     * 设置物理区
                     * @param _physicalZone 物理区
                     * 
                     */
                    void SetPhysicalZone(const std::string& _physicalZone);

                    /**
                     * 判断参数 PhysicalZone 是否已赋值
                     * @return PhysicalZone 是否已赋值
                     * 
                     */
                    bool PhysicalZoneHasBeenSet() const;

                    /**
                     * 获取用户是否有可用区权限
                     * @return HasPermission 用户是否有可用区权限
                     * 
                     */
                    bool GetHasPermission() const;

                    /**
                     * 设置用户是否有可用区权限
                     * @param _hasPermission 用户是否有可用区权限
                     * 
                     */
                    void SetHasPermission(const bool& _hasPermission);

                    /**
                     * 判断参数 HasPermission 是否已赋值
                     * @return HasPermission 是否已赋值
                     * 
                     */
                    bool HasPermissionHasBeenSet() const;

                    /**
                     * 获取是否为全链路RDMA可用区
                     * @return IsWholeRdmaZone 是否为全链路RDMA可用区
                     * 
                     */
                    std::string GetIsWholeRdmaZone() const;

                    /**
                     * 设置是否为全链路RDMA可用区
                     * @param _isWholeRdmaZone 是否为全链路RDMA可用区
                     * 
                     */
                    void SetIsWholeRdmaZone(const std::string& _isWholeRdmaZone);

                    /**
                     * 判断参数 IsWholeRdmaZone 是否已赋值
                     * @return IsWholeRdmaZone 是否已赋值
                     * 
                     */
                    bool IsWholeRdmaZoneHasBeenSet() const;

                    /**
                     * 获取当前可用区是否允许新购集群，1:允许，0:不允许
                     * @return IsSupportCreateCluster 当前可用区是否允许新购集群，1:允许，0:不允许
                     * 
                     */
                    int64_t GetIsSupportCreateCluster() const;

                    /**
                     * 设置当前可用区是否允许新购集群，1:允许，0:不允许
                     * @param _isSupportCreateCluster 当前可用区是否允许新购集群，1:允许，0:不允许
                     * 
                     */
                    void SetIsSupportCreateCluster(const int64_t& _isSupportCreateCluster);

                    /**
                     * 判断参数 IsSupportCreateCluster 是否已赋值
                     * @return IsSupportCreateCluster 是否已赋值
                     * 
                     */
                    bool IsSupportCreateClusterHasBeenSet() const;

                private:

                    /**
                     * 可用区英文名
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 可用区数字ID
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 可用区中文名
                     */
                    std::string m_zoneZh;
                    bool m_zoneZhHasBeenSet;

                    /**
                     * 是否支持serverless集群<br>
0:不支持<br>
1:支持
                     */
                    int64_t m_isSupportServerless;
                    bool m_isSupportServerlessHasBeenSet;

                    /**
                     * 是否支持普通集群<br>
0:不支持<br>
1:支持
                     */
                    int64_t m_isSupportNormal;
                    bool m_isSupportNormalHasBeenSet;

                    /**
                     * 物理区
                     */
                    std::string m_physicalZone;
                    bool m_physicalZoneHasBeenSet;

                    /**
                     * 用户是否有可用区权限
                     */
                    bool m_hasPermission;
                    bool m_hasPermissionHasBeenSet;

                    /**
                     * 是否为全链路RDMA可用区
                     */
                    std::string m_isWholeRdmaZone;
                    bool m_isWholeRdmaZoneHasBeenSet;

                    /**
                     * 当前可用区是否允许新购集群，1:允许，0:不允许
                     */
                    int64_t m_isSupportCreateCluster;
                    bool m_isSupportCreateClusterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SALEZONE_H_
