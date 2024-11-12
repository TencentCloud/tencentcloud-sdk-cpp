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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_BASELINERISKITEM_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_BASELINERISKITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 基线检测项top5
                */
                class BaselineRiskItem : public AbstractModel
                {
                public:
                    BaselineRiskItem();
                    ~BaselineRiskItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取检测项Id
                     * @return ItemId 检测项Id
                     * 
                     */
                    int64_t GetItemId() const;

                    /**
                     * 设置检测项Id
                     * @param _itemId 检测项Id
                     * 
                     */
                    void SetItemId(const int64_t& _itemId);

                    /**
                     * 判断参数 ItemId 是否已赋值
                     * @return ItemId 是否已赋值
                     * 
                     */
                    bool ItemIdHasBeenSet() const;

                    /**
                     * 获取检测项名字
                     * @return ItemName 检测项名字
                     * 
                     */
                    std::string GetItemName() const;

                    /**
                     * 设置检测项名字
                     * @param _itemName 检测项名字
                     * 
                     */
                    void SetItemName(const std::string& _itemName);

                    /**
                     * 判断参数 ItemName 是否已赋值
                     * @return ItemName 是否已赋值
                     * 
                     */
                    bool ItemNameHasBeenSet() const;

                    /**
                     * 获取风险等级
                     * @return Level 风险等级
                     * 
                     */
                    int64_t GetLevel() const;

                    /**
                     * 设置风险等级
                     * @param _level 风险等级
                     * 
                     */
                    void SetLevel(const int64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取影响服务器数
                     * @return HostCount 影响服务器数
                     * 
                     */
                    int64_t GetHostCount() const;

                    /**
                     * 设置影响服务器数
                     * @param _hostCount 影响服务器数
                     * 
                     */
                    void SetHostCount(const int64_t& _hostCount);

                    /**
                     * 判断参数 HostCount 是否已赋值
                     * @return HostCount 是否已赋值
                     * 
                     */
                    bool HostCountHasBeenSet() const;

                private:

                    /**
                     * 检测项Id
                     */
                    int64_t m_itemId;
                    bool m_itemIdHasBeenSet;

                    /**
                     * 检测项名字
                     */
                    std::string m_itemName;
                    bool m_itemNameHasBeenSet;

                    /**
                     * 风险等级
                     */
                    int64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 影响服务器数
                     */
                    int64_t m_hostCount;
                    bool m_hostCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_BASELINERISKITEM_H_
