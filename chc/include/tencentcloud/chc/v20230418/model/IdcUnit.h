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

#ifndef TENCENTCLOUD_CHC_V20230418_MODEL_IDCUNIT_H_
#define TENCENTCLOUD_CHC_V20230418_MODEL_IDCUNIT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/chc/v20230418/model/Cage.h>


namespace TencentCloud
{
    namespace Chc
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 机房管理单元
                */
                class IdcUnit : public AbstractModel
                {
                public:
                    IdcUnit();
                    ~IdcUnit() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取机房管理单元 ID
                     * @return IdcUnitId 机房管理单元 ID
                     * 
                     */
                    uint64_t GetIdcUnitId() const;

                    /**
                     * 设置机房管理单元 ID
                     * @param _idcUnitId 机房管理单元 ID
                     * 
                     */
                    void SetIdcUnitId(const uint64_t& _idcUnitId);

                    /**
                     * 判断参数 IdcUnitId 是否已赋值
                     * @return IdcUnitId 是否已赋值
                     * 
                     */
                    bool IdcUnitIdHasBeenSet() const;

                    /**
                     * 获取机房管理单元名称
                     * @return IdcUnitName 机房管理单元名称
                     * 
                     */
                    std::string GetIdcUnitName() const;

                    /**
                     * 设置机房管理单元名称
                     * @param _idcUnitName 机房管理单元名称
                     * 
                     */
                    void SetIdcUnitName(const std::string& _idcUnitName);

                    /**
                     * 判断参数 IdcUnitName 是否已赋值
                     * @return IdcUnitName 是否已赋值
                     * 
                     */
                    bool IdcUnitNameHasBeenSet() const;

                    /**
                     * 获取围笼列表
                     * @return CageSet 围笼列表
                     * 
                     */
                    std::vector<Cage> GetCageSet() const;

                    /**
                     * 设置围笼列表
                     * @param _cageSet 围笼列表
                     * 
                     */
                    void SetCageSet(const std::vector<Cage>& _cageSet);

                    /**
                     * 判断参数 CageSet 是否已赋值
                     * @return CageSet 是否已赋值
                     * 
                     */
                    bool CageSetHasBeenSet() const;

                private:

                    /**
                     * 机房管理单元 ID
                     */
                    uint64_t m_idcUnitId;
                    bool m_idcUnitIdHasBeenSet;

                    /**
                     * 机房管理单元名称
                     */
                    std::string m_idcUnitName;
                    bool m_idcUnitNameHasBeenSet;

                    /**
                     * 围笼列表
                     */
                    std::vector<Cage> m_cageSet;
                    bool m_cageSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHC_V20230418_MODEL_IDCUNIT_H_
