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

#ifndef TENCENTCLOUD_ZJ_V20190121_MODEL_PAASSTRATEGY_H_
#define TENCENTCLOUD_ZJ_V20190121_MODEL_PAASSTRATEGY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/zj/v20190121/model/PaasStrategyItem.h>


namespace TencentCloud
{
    namespace Zj
    {
        namespace V20190121
        {
            namespace Model
            {
                /**
                * 短信发送人群包策略
                */
                class PaasStrategy : public AbstractModel
                {
                public:
                    PaasStrategy();
                    ~PaasStrategy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取人群包id
                     * @return CrowdID 人群包id
                     * 
                     */
                    int64_t GetCrowdID() const;

                    /**
                     * 设置人群包id
                     * @param _crowdID 人群包id
                     * 
                     */
                    void SetCrowdID(const int64_t& _crowdID);

                    /**
                     * 判断参数 CrowdID 是否已赋值
                     * @return CrowdID 是否已赋值
                     * 
                     */
                    bool CrowdIDHasBeenSet() const;

                    /**
                     * 获取待选素材数组
                     * @return Items 待选素材数组
                     * 
                     */
                    std::vector<PaasStrategyItem> GetItems() const;

                    /**
                     * 设置待选素材数组
                     * @param _items 待选素材数组
                     * 
                     */
                    void SetItems(const std::vector<PaasStrategyItem>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                private:

                    /**
                     * 人群包id
                     */
                    int64_t m_crowdID;
                    bool m_crowdIDHasBeenSet;

                    /**
                     * 待选素材数组
                     */
                    std::vector<PaasStrategyItem> m_items;
                    bool m_itemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ZJ_V20190121_MODEL_PAASSTRATEGY_H_
