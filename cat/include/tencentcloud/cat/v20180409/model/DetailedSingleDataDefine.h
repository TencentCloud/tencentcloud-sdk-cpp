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

#ifndef TENCENTCLOUD_CAT_V20180409_MODEL_DETAILEDSINGLEDATADEFINE_H_
#define TENCENTCLOUD_CAT_V20180409_MODEL_DETAILEDSINGLEDATADEFINE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cat/v20180409/model/Label.h>
#include <tencentcloud/cat/v20180409/model/Field.h>


namespace TencentCloud
{
    namespace Cat
    {
        namespace V20180409
        {
            namespace Model
            {
                /**
                * 单条详细拨测数据
                */
                class DetailedSingleDataDefine : public AbstractModel
                {
                public:
                    DetailedSingleDataDefine();
                    ~DetailedSingleDataDefine() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取拨测时间戳
                     * @return ProbeTime 拨测时间戳
                     * 
                     */
                    uint64_t GetProbeTime() const;

                    /**
                     * 设置拨测时间戳
                     * @param _probeTime 拨测时间戳
                     * 
                     */
                    void SetProbeTime(const uint64_t& _probeTime);

                    /**
                     * 判断参数 ProbeTime 是否已赋值
                     * @return ProbeTime 是否已赋值
                     * 
                     */
                    bool ProbeTimeHasBeenSet() const;

                    /**
                     * 获取储存所有string类型字段
                     * @return Labels 储存所有string类型字段
                     * 
                     */
                    std::vector<Label> GetLabels() const;

                    /**
                     * 设置储存所有string类型字段
                     * @param _labels 储存所有string类型字段
                     * 
                     */
                    void SetLabels(const std::vector<Label>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                    /**
                     * 获取储存所有float类型字段
                     * @return Fields 储存所有float类型字段
                     * 
                     */
                    std::vector<Field> GetFields() const;

                    /**
                     * 设置储存所有float类型字段
                     * @param _fields 储存所有float类型字段
                     * 
                     */
                    void SetFields(const std::vector<Field>& _fields);

                    /**
                     * 判断参数 Fields 是否已赋值
                     * @return Fields 是否已赋值
                     * 
                     */
                    bool FieldsHasBeenSet() const;

                private:

                    /**
                     * 拨测时间戳
                     */
                    uint64_t m_probeTime;
                    bool m_probeTimeHasBeenSet;

                    /**
                     * 储存所有string类型字段
                     */
                    std::vector<Label> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * 储存所有float类型字段
                     */
                    std::vector<Field> m_fields;
                    bool m_fieldsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAT_V20180409_MODEL_DETAILEDSINGLEDATADEFINE_H_
