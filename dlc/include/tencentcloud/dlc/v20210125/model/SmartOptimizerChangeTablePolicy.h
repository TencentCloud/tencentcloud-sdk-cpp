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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_SMARTOPTIMIZERCHANGETABLEPOLICY_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_SMARTOPTIMIZERCHANGETABLEPOLICY_H_

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
                * 混合表中，change表的数据保存时间，单位为天
                */
                class SmartOptimizerChangeTablePolicy : public AbstractModel
                {
                public:
                    SmartOptimizerChangeTablePolicy();
                    ~SmartOptimizerChangeTablePolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取change表的数据保存时间，单位为天
                     * @return DataRetentionTime change表的数据保存时间，单位为天
                     * 
                     */
                    int64_t GetDataRetentionTime() const;

                    /**
                     * 设置change表的数据保存时间，单位为天
                     * @param _dataRetentionTime change表的数据保存时间，单位为天
                     * 
                     */
                    void SetDataRetentionTime(const int64_t& _dataRetentionTime);

                    /**
                     * 判断参数 DataRetentionTime 是否已赋值
                     * @return DataRetentionTime 是否已赋值
                     * 
                     */
                    bool DataRetentionTimeHasBeenSet() const;

                private:

                    /**
                     * change表的数据保存时间，单位为天
                     */
                    int64_t m_dataRetentionTime;
                    bool m_dataRetentionTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_SMARTOPTIMIZERCHANGETABLEPOLICY_H_
