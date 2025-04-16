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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_OPTIMIZERENGINEINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_OPTIMIZERENGINEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 数据优化引擎信息
                */
                class OptimizerEngineInfo : public AbstractModel
                {
                public:
                    OptimizerEngineInfo();
                    ~OptimizerEngineInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取引擎资源名称
                     * @return HouseName 引擎资源名称
                     * 
                     */
                    std::string GetHouseName() const;

                    /**
                     * 设置引擎资源名称
                     * @param _houseName 引擎资源名称
                     * 
                     */
                    void SetHouseName(const std::string& _houseName);

                    /**
                     * 判断参数 HouseName 是否已赋值
                     * @return HouseName 是否已赋值
                     * 
                     */
                    bool HouseNameHasBeenSet() const;

                    /**
                     * 获取引擎资源ID
                     * @return HouseId 引擎资源ID
                     * 
                     */
                    std::string GetHouseId() const;

                    /**
                     * 设置引擎资源ID
                     * @param _houseId 引擎资源ID
                     * 
                     */
                    void SetHouseId(const std::string& _houseId);

                    /**
                     * 判断参数 HouseId 是否已赋值
                     * @return HouseId 是否已赋值
                     * 
                     */
                    bool HouseIdHasBeenSet() const;

                    /**
                     * 获取该参数仅针对spark作业引擎有效，用于执行数据优化任务的资源大小，不填时将采用该引擎所有资源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HouseSize 该参数仅针对spark作业引擎有效，用于执行数据优化任务的资源大小，不填时将采用该引擎所有资源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetHouseSize() const;

                    /**
                     * 设置该参数仅针对spark作业引擎有效，用于执行数据优化任务的资源大小，不填时将采用该引擎所有资源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _houseSize 该参数仅针对spark作业引擎有效，用于执行数据优化任务的资源大小，不填时将采用该引擎所有资源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHouseSize(const int64_t& _houseSize);

                    /**
                     * 判断参数 HouseSize 是否已赋值
                     * @return HouseSize 是否已赋值
                     * 
                     */
                    bool HouseSizeHasBeenSet() const;

                private:

                    /**
                     * 引擎资源名称
                     */
                    std::string m_houseName;
                    bool m_houseNameHasBeenSet;

                    /**
                     * 引擎资源ID
                     */
                    std::string m_houseId;
                    bool m_houseIdHasBeenSet;

                    /**
                     * 该参数仅针对spark作业引擎有效，用于执行数据优化任务的资源大小，不填时将采用该引擎所有资源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_houseSize;
                    bool m_houseSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_OPTIMIZERENGINEINFO_H_
