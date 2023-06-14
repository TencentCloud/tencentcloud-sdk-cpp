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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_SPECIFICATIONDATAITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_SPECIFICATIONDATAITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/TaskStatDataItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 指定规格任务统计数据。
                */
                class SpecificationDataItem : public AbstractModel
                {
                public:
                    SpecificationDataItem();
                    ~SpecificationDataItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务规格。
                     * @return Specification 任务规格。
                     * 
                     */
                    std::string GetSpecification() const;

                    /**
                     * 设置任务规格。
                     * @param _specification 任务规格。
                     * 
                     */
                    void SetSpecification(const std::string& _specification);

                    /**
                     * 判断参数 Specification 是否已赋值
                     * @return Specification 是否已赋值
                     * 
                     */
                    bool SpecificationHasBeenSet() const;

                    /**
                     * 获取统计数据。
                     * @return Data 统计数据。
                     * 
                     */
                    std::vector<TaskStatDataItem> GetData() const;

                    /**
                     * 设置统计数据。
                     * @param _data 统计数据。
                     * 
                     */
                    void SetData(const std::vector<TaskStatDataItem>& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 任务规格。
                     */
                    std::string m_specification;
                    bool m_specificationHasBeenSet;

                    /**
                     * 统计数据。
                     */
                    std::vector<TaskStatDataItem> m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SPECIFICATIONDATAITEM_H_
