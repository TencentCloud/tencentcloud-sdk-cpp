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

#ifndef TENCENTCLOUD_IVLD_V20210903_MODEL_DATA_H_
#define TENCENTCLOUD_IVLD_V20210903_MODEL_DATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ivld/v20210903/model/ShowInfo.h>


namespace TencentCloud
{
    namespace Ivld
    {
        namespace V20210903
        {
            namespace Model
            {
                /**
                * 任务结果数据
                */
                class Data : public AbstractModel
                {
                public:
                    Data();
                    ~Data() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取节目粒度结构化结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ShowInfo 节目粒度结构化结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ShowInfo GetShowInfo() const;

                    /**
                     * 设置节目粒度结构化结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _showInfo 节目粒度结构化结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetShowInfo(const ShowInfo& _showInfo);

                    /**
                     * 判断参数 ShowInfo 是否已赋值
                     * @return ShowInfo 是否已赋值
                     * 
                     */
                    bool ShowInfoHasBeenSet() const;

                private:

                    /**
                     * 节目粒度结构化结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ShowInfo m_showInfo;
                    bool m_showInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IVLD_V20210903_MODEL_DATA_H_
