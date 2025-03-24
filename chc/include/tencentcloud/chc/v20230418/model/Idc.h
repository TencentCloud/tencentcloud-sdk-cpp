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

#ifndef TENCENTCLOUD_CHC_V20230418_MODEL_IDC_H_
#define TENCENTCLOUD_CHC_V20230418_MODEL_IDC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/chc/v20230418/model/IdcUnit.h>


namespace TencentCloud
{
    namespace Chc
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 机房信息
                */
                class Idc : public AbstractModel
                {
                public:
                    Idc();
                    ~Idc() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取机房名称
                     * @return IdcName 机房名称
                     * 
                     */
                    std::string GetIdcName() const;

                    /**
                     * 设置机房名称
                     * @param _idcName 机房名称
                     * 
                     */
                    void SetIdcName(const std::string& _idcName);

                    /**
                     * 判断参数 IdcName 是否已赋值
                     * @return IdcName 是否已赋值
                     * 
                     */
                    bool IdcNameHasBeenSet() const;

                    /**
                     * 获取机房ID
                     * @return IdcId 机房ID
                     * 
                     */
                    uint64_t GetIdcId() const;

                    /**
                     * 设置机房ID
                     * @param _idcId 机房ID
                     * 
                     */
                    void SetIdcId(const uint64_t& _idcId);

                    /**
                     * 判断参数 IdcId 是否已赋值
                     * @return IdcId 是否已赋值
                     * 
                     */
                    bool IdcIdHasBeenSet() const;

                    /**
                     * 获取机房管理单元详情列表
                     * @return IdcUnitSet 机房管理单元详情列表
                     * 
                     */
                    std::vector<IdcUnit> GetIdcUnitSet() const;

                    /**
                     * 设置机房管理单元详情列表
                     * @param _idcUnitSet 机房管理单元详情列表
                     * 
                     */
                    void SetIdcUnitSet(const std::vector<IdcUnit>& _idcUnitSet);

                    /**
                     * 判断参数 IdcUnitSet 是否已赋值
                     * @return IdcUnitSet 是否已赋值
                     * 
                     */
                    bool IdcUnitSetHasBeenSet() const;

                private:

                    /**
                     * 机房名称
                     */
                    std::string m_idcName;
                    bool m_idcNameHasBeenSet;

                    /**
                     * 机房ID
                     */
                    uint64_t m_idcId;
                    bool m_idcIdHasBeenSet;

                    /**
                     * 机房管理单元详情列表
                     */
                    std::vector<IdcUnit> m_idcUnitSet;
                    bool m_idcUnitSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHC_V20230418_MODEL_IDC_H_
