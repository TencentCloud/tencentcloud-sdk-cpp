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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_LISTAITASKDATA_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_LISTAITASKDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iss/v20230517/model/AITaskInfo.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * 获取AI任务列表的数据
                */
                class ListAITaskData : public AbstractModel
                {
                public:
                    ListAITaskData();
                    ~ListAITaskData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取AI任务列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return List AI任务列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AITaskInfo> GetList() const;

                    /**
                     * 设置AI任务列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _list AI任务列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetList(const std::vector<AITaskInfo>& _list);

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     * 
                     */
                    bool ListHasBeenSet() const;

                private:

                    /**
                     * AI任务列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AITaskInfo> m_list;
                    bool m_listHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_LISTAITASKDATA_H_
