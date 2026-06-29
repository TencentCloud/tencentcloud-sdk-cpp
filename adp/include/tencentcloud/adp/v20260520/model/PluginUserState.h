/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_PLUGINUSERSTATE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_PLUGINUSERSTATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * PluginUserState
                */
                class PluginUserState : public AbstractModel
                {
                public:
                    PluginUserState();
                    ~PluginUserState() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否已收藏该插件
                     * @return IsFavorite 是否已收藏该插件
                     * 
                     */
                    bool GetIsFavorite() const;

                    /**
                     * 设置是否已收藏该插件
                     * @param _isFavorite 是否已收藏该插件
                     * 
                     */
                    void SetIsFavorite(const bool& _isFavorite);

                    /**
                     * 判断参数 IsFavorite 是否已赋值
                     * @return IsFavorite 是否已赋值
                     * 
                     */
                    bool IsFavoriteHasBeenSet() const;

                    /**
                     * 获取是否在插件白名单内
                     * @return IsInWhiteList 是否在插件白名单内
                     * 
                     */
                    bool GetIsInWhiteList() const;

                    /**
                     * 设置是否在插件白名单内
                     * @param _isInWhiteList 是否在插件白名单内
                     * 
                     */
                    void SetIsInWhiteList(const bool& _isInWhiteList);

                    /**
                     * 判断参数 IsInWhiteList 是否已赋值
                     * @return IsInWhiteList 是否已赋值
                     * 
                     */
                    bool IsInWhiteListHasBeenSet() const;

                    /**
                     * 获取<p>白名单类型，用于表示当前用户是否可直接使用该插件。</p><p>枚举值：</p><ul><li>0：非白名单插件，全量开放</li><li>1：当前用户在白名单内</li><li>2：当前用户不在白名单内，需提交申请</li></ul>
                     * @return WhiteListType <p>白名单类型，用于表示当前用户是否可直接使用该插件。</p><p>枚举值：</p><ul><li>0：非白名单插件，全量开放</li><li>1：当前用户在白名单内</li><li>2：当前用户不在白名单内，需提交申请</li></ul>
                     * 
                     */
                    int64_t GetWhiteListType() const;

                    /**
                     * 设置<p>白名单类型，用于表示当前用户是否可直接使用该插件。</p><p>枚举值：</p><ul><li>0：非白名单插件，全量开放</li><li>1：当前用户在白名单内</li><li>2：当前用户不在白名单内，需提交申请</li></ul>
                     * @param _whiteListType <p>白名单类型，用于表示当前用户是否可直接使用该插件。</p><p>枚举值：</p><ul><li>0：非白名单插件，全量开放</li><li>1：当前用户在白名单内</li><li>2：当前用户不在白名单内，需提交申请</li></ul>
                     * 
                     */
                    void SetWhiteListType(const int64_t& _whiteListType);

                    /**
                     * 判断参数 WhiteListType 是否已赋值
                     * @return WhiteListType 是否已赋值
                     * 
                     */
                    bool WhiteListTypeHasBeenSet() const;

                private:

                    /**
                     * 是否已收藏该插件
                     */
                    bool m_isFavorite;
                    bool m_isFavoriteHasBeenSet;

                    /**
                     * 是否在插件白名单内
                     */
                    bool m_isInWhiteList;
                    bool m_isInWhiteListHasBeenSet;

                    /**
                     * <p>白名单类型，用于表示当前用户是否可直接使用该插件。</p><p>枚举值：</p><ul><li>0：非白名单插件，全量开放</li><li>1：当前用户在白名单内</li><li>2：当前用户不在白名单内，需提交申请</li></ul>
                     */
                    int64_t m_whiteListType;
                    bool m_whiteListTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_PLUGINUSERSTATE_H_
