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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYROGROUPINFOREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYROGROUPINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/RoGroupAttr.h>
#include <tencentcloud/cdb/v20170320/model/RoWeightValue.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * ModifyRoGroupInfo请求参数结构体
                */
                class ModifyRoGroupInfoRequest : public AbstractModel
                {
                public:
                    ModifyRoGroupInfoRequest();
                    ~ModifyRoGroupInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取RO 组的 ID。
                     * @return RoGroupId RO 组的 ID。
                     * 
                     */
                    std::string GetRoGroupId() const;

                    /**
                     * 设置RO 组的 ID。
                     * @param _roGroupId RO 组的 ID。
                     * 
                     */
                    void SetRoGroupId(const std::string& _roGroupId);

                    /**
                     * 判断参数 RoGroupId 是否已赋值
                     * @return RoGroupId 是否已赋值
                     * 
                     */
                    bool RoGroupIdHasBeenSet() const;

                    /**
                     * 获取RO 组的详细信息。
                     * @return RoGroupInfo RO 组的详细信息。
                     * 
                     */
                    RoGroupAttr GetRoGroupInfo() const;

                    /**
                     * 设置RO 组的详细信息。
                     * @param _roGroupInfo RO 组的详细信息。
                     * 
                     */
                    void SetRoGroupInfo(const RoGroupAttr& _roGroupInfo);

                    /**
                     * 判断参数 RoGroupInfo 是否已赋值
                     * @return RoGroupInfo 是否已赋值
                     * 
                     */
                    bool RoGroupInfoHasBeenSet() const;

                    /**
                     * 获取RO 组内实例的权重。若修改 RO 组的权重模式为用户自定义模式（custom），则必须设置该参数，且需要设置每个 RO 实例的权重值。
                     * @return RoWeightValues RO 组内实例的权重。若修改 RO 组的权重模式为用户自定义模式（custom），则必须设置该参数，且需要设置每个 RO 实例的权重值。
                     * 
                     */
                    std::vector<RoWeightValue> GetRoWeightValues() const;

                    /**
                     * 设置RO 组内实例的权重。若修改 RO 组的权重模式为用户自定义模式（custom），则必须设置该参数，且需要设置每个 RO 实例的权重值。
                     * @param _roWeightValues RO 组内实例的权重。若修改 RO 组的权重模式为用户自定义模式（custom），则必须设置该参数，且需要设置每个 RO 实例的权重值。
                     * 
                     */
                    void SetRoWeightValues(const std::vector<RoWeightValue>& _roWeightValues);

                    /**
                     * 判断参数 RoWeightValues 是否已赋值
                     * @return RoWeightValues 是否已赋值
                     * 
                     */
                    bool RoWeightValuesHasBeenSet() const;

                    /**
                     * 获取是否重新均衡 RO 组内的 RO 实例的负载。支持值包括：1 - 重新均衡负载；0 - 不重新均衡负载。默认值为 0。注意，设置为重新均衡负载时，RO 组内 RO 实例会有一次数据库连接瞬断，请确保应用程序能重连数据库。
                     * @return IsBalanceRoLoad 是否重新均衡 RO 组内的 RO 实例的负载。支持值包括：1 - 重新均衡负载；0 - 不重新均衡负载。默认值为 0。注意，设置为重新均衡负载时，RO 组内 RO 实例会有一次数据库连接瞬断，请确保应用程序能重连数据库。
                     * 
                     */
                    int64_t GetIsBalanceRoLoad() const;

                    /**
                     * 设置是否重新均衡 RO 组内的 RO 实例的负载。支持值包括：1 - 重新均衡负载；0 - 不重新均衡负载。默认值为 0。注意，设置为重新均衡负载时，RO 组内 RO 实例会有一次数据库连接瞬断，请确保应用程序能重连数据库。
                     * @param _isBalanceRoLoad 是否重新均衡 RO 组内的 RO 实例的负载。支持值包括：1 - 重新均衡负载；0 - 不重新均衡负载。默认值为 0。注意，设置为重新均衡负载时，RO 组内 RO 实例会有一次数据库连接瞬断，请确保应用程序能重连数据库。
                     * 
                     */
                    void SetIsBalanceRoLoad(const int64_t& _isBalanceRoLoad);

                    /**
                     * 判断参数 IsBalanceRoLoad 是否已赋值
                     * @return IsBalanceRoLoad 是否已赋值
                     * 
                     */
                    bool IsBalanceRoLoadHasBeenSet() const;

                    /**
                     * 获取废弃参数，无意义。
                     * @return ReplicationDelayTime 废弃参数，无意义。
                     * @deprecated
                     */
                    int64_t GetReplicationDelayTime() const;

                    /**
                     * 设置废弃参数，无意义。
                     * @param _replicationDelayTime 废弃参数，无意义。
                     * @deprecated
                     */
                    void SetReplicationDelayTime(const int64_t& _replicationDelayTime);

                    /**
                     * 判断参数 ReplicationDelayTime 是否已赋值
                     * @return ReplicationDelayTime 是否已赋值
                     * @deprecated
                     */
                    bool ReplicationDelayTimeHasBeenSet() const;

                private:

                    /**
                     * RO 组的 ID。
                     */
                    std::string m_roGroupId;
                    bool m_roGroupIdHasBeenSet;

                    /**
                     * RO 组的详细信息。
                     */
                    RoGroupAttr m_roGroupInfo;
                    bool m_roGroupInfoHasBeenSet;

                    /**
                     * RO 组内实例的权重。若修改 RO 组的权重模式为用户自定义模式（custom），则必须设置该参数，且需要设置每个 RO 实例的权重值。
                     */
                    std::vector<RoWeightValue> m_roWeightValues;
                    bool m_roWeightValuesHasBeenSet;

                    /**
                     * 是否重新均衡 RO 组内的 RO 实例的负载。支持值包括：1 - 重新均衡负载；0 - 不重新均衡负载。默认值为 0。注意，设置为重新均衡负载时，RO 组内 RO 实例会有一次数据库连接瞬断，请确保应用程序能重连数据库。
                     */
                    int64_t m_isBalanceRoLoad;
                    bool m_isBalanceRoLoadHasBeenSet;

                    /**
                     * 废弃参数，无意义。
                     */
                    int64_t m_replicationDelayTime;
                    bool m_replicationDelayTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYROGROUPINFOREQUEST_H_
