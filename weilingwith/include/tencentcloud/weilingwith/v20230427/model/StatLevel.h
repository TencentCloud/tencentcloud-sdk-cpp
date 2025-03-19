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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_STATLEVEL_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_STATLEVEL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/weilingwith/v20230427/model/StatDeviceType.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * 层级统计
                */
                class StatLevel : public AbstractModel
                {
                public:
                    StatLevel();
                    ~StatLevel() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取汇总数。在线（正常+故障） + 离线
                     * @return Total 汇总数。在线（正常+故障） + 离线
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 设置汇总数。在线（正常+故障） + 离线
                     * @param _total 汇总数。在线（正常+故障） + 离线
                     * 
                     */
                    void SetTotal(const int64_t& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取正常数
                     * @return NormalSum 正常数
                     * 
                     */
                    int64_t GetNormalSum() const;

                    /**
                     * 设置正常数
                     * @param _normalSum 正常数
                     * 
                     */
                    void SetNormalSum(const int64_t& _normalSum);

                    /**
                     * 判断参数 NormalSum 是否已赋值
                     * @return NormalSum 是否已赋值
                     * 
                     */
                    bool NormalSumHasBeenSet() const;

                    /**
                     * 获取离线数
                     * @return OfflineSum 离线数
                     * 
                     */
                    int64_t GetOfflineSum() const;

                    /**
                     * 设置离线数
                     * @param _offlineSum 离线数
                     * 
                     */
                    void SetOfflineSum(const int64_t& _offlineSum);

                    /**
                     * 判断参数 OfflineSum 是否已赋值
                     * @return OfflineSum 是否已赋值
                     * 
                     */
                    bool OfflineSumHasBeenSet() const;

                    /**
                     * 获取故障数
                     * @return FaultSum 故障数
                     * 
                     */
                    int64_t GetFaultSum() const;

                    /**
                     * 设置故障数
                     * @param _faultSum 故障数
                     * 
                     */
                    void SetFaultSum(const int64_t& _faultSum);

                    /**
                     * 判断参数 FaultSum 是否已赋值
                     * @return FaultSum 是否已赋值
                     * 
                     */
                    bool FaultSumHasBeenSet() const;

                    /**
                     * 获取空间id
                     * @return SpaceCode 空间id
                     * 
                     */
                    std::string GetSpaceCode() const;

                    /**
                     * 设置空间id
                     * @param _spaceCode 空间id
                     * 
                     */
                    void SetSpaceCode(const std::string& _spaceCode);

                    /**
                     * 判断参数 SpaceCode 是否已赋值
                     * @return SpaceCode 是否已赋值
                     * 
                     */
                    bool SpaceCodeHasBeenSet() const;

                    /**
                     * 获取设备类型统计列表
                     * @return StatDeviceTypeSet 设备类型统计列表
                     * 
                     */
                    std::vector<StatDeviceType> GetStatDeviceTypeSet() const;

                    /**
                     * 设置设备类型统计列表
                     * @param _statDeviceTypeSet 设备类型统计列表
                     * 
                     */
                    void SetStatDeviceTypeSet(const std::vector<StatDeviceType>& _statDeviceTypeSet);

                    /**
                     * 判断参数 StatDeviceTypeSet 是否已赋值
                     * @return StatDeviceTypeSet 是否已赋值
                     * 
                     */
                    bool StatDeviceTypeSetHasBeenSet() const;

                private:

                    /**
                     * 汇总数。在线（正常+故障） + 离线
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 正常数
                     */
                    int64_t m_normalSum;
                    bool m_normalSumHasBeenSet;

                    /**
                     * 离线数
                     */
                    int64_t m_offlineSum;
                    bool m_offlineSumHasBeenSet;

                    /**
                     * 故障数
                     */
                    int64_t m_faultSum;
                    bool m_faultSumHasBeenSet;

                    /**
                     * 空间id
                     */
                    std::string m_spaceCode;
                    bool m_spaceCodeHasBeenSet;

                    /**
                     * 设备类型统计列表
                     */
                    std::vector<StatDeviceType> m_statDeviceTypeSet;
                    bool m_statDeviceTypeSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_STATLEVEL_H_
