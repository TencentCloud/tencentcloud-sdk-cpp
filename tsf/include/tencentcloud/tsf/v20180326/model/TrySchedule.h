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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_TRYSCHEDULE_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_TRYSCHEDULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/Affinity.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 尽量调度
                */
                class TrySchedule : public AbstractModel
                {
                public:
                    TrySchedule();
                    ~TrySchedule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取-
                     * @return AffinityList -
                     * 
                     */
                    std::vector<Affinity> GetAffinityList() const;

                    /**
                     * 设置-
                     * @param _affinityList -
                     * 
                     */
                    void SetAffinityList(const std::vector<Affinity>& _affinityList);

                    /**
                     * 判断参数 AffinityList 是否已赋值
                     * @return AffinityList 是否已赋值
                     * 
                     */
                    bool AffinityListHasBeenSet() const;

                    /**
                     * 获取-
                     * @return AntiAffinityList -
                     * 
                     */
                    std::vector<Affinity> GetAntiAffinityList() const;

                    /**
                     * 设置-
                     * @param _antiAffinityList -
                     * 
                     */
                    void SetAntiAffinityList(const std::vector<Affinity>& _antiAffinityList);

                    /**
                     * 判断参数 AntiAffinityList 是否已赋值
                     * @return AntiAffinityList 是否已赋值
                     * 
                     */
                    bool AntiAffinityListHasBeenSet() const;

                private:

                    /**
                     * -
                     */
                    std::vector<Affinity> m_affinityList;
                    bool m_affinityListHasBeenSet;

                    /**
                     * -
                     */
                    std::vector<Affinity> m_antiAffinityList;
                    bool m_antiAffinityListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_TRYSCHEDULE_H_
