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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_LISTRECORDPLANCHANNELSDATA_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_LISTRECORDPLANCHANNELSDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * 用户下所有实时上云计划中的通道id列表返回数据
                */
                class ListRecordPlanChannelsData : public AbstractModel
                {
                public:
                    ListRecordPlanChannelsData();
                    ~ListRecordPlanChannelsData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户所有计划下通道id，存在通道是为数组格式，不存在时，字段数据为空 
注意：此字段可能返回 null，表示取不到有效值。
                     * @return List 用户所有计划下通道id，存在通道是为数组格式，不存在时，字段数据为空 
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetList() const;

                    /**
                     * 设置用户所有计划下通道id，存在通道是为数组格式，不存在时，字段数据为空 
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _list 用户所有计划下通道id，存在通道是为数组格式，不存在时，字段数据为空 
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetList(const std::vector<std::string>& _list);

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     * 
                     */
                    bool ListHasBeenSet() const;

                private:

                    /**
                     * 用户所有计划下通道id，存在通道是为数组格式，不存在时，字段数据为空 
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_list;
                    bool m_listHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_LISTRECORDPLANCHANNELSDATA_H_
