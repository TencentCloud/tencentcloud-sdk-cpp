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

#ifndef TENCENTCLOUD_AME_V20190916_MODEL_DESCRIBELYRICREQUEST_H_
#define TENCENTCLOUD_AME_V20190916_MODEL_DESCRIBELYRICREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ame
    {
        namespace V20190916
        {
            namespace Model
            {
                /**
                * DescribeLyric请求参数结构体
                */
                class DescribeLyricRequest : public AbstractModel
                {
                public:
                    DescribeLyricRequest();
                    ~DescribeLyricRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取歌曲ID
                     * @return ItemId 歌曲ID
                     * 
                     */
                    std::string GetItemId() const;

                    /**
                     * 设置歌曲ID
                     * @param _itemId 歌曲ID
                     * 
                     */
                    void SetItemId(const std::string& _itemId);

                    /**
                     * 判断参数 ItemId 是否已赋值
                     * @return ItemId 是否已赋值
                     * 
                     */
                    bool ItemIdHasBeenSet() const;

                    /**
                     * 获取格式，可选项，可不填写，默认值为：LRC-LRC。
<li>LRC-LRC：歌词；</li>
<li>JSON-ST：波形图。</li>
                     * @return SubItemType 格式，可选项，可不填写，默认值为：LRC-LRC。
<li>LRC-LRC：歌词；</li>
<li>JSON-ST：波形图。</li>
                     * 
                     */
                    std::string GetSubItemType() const;

                    /**
                     * 设置格式，可选项，可不填写，默认值为：LRC-LRC。
<li>LRC-LRC：歌词；</li>
<li>JSON-ST：波形图。</li>
                     * @param _subItemType 格式，可选项，可不填写，默认值为：LRC-LRC。
<li>LRC-LRC：歌词；</li>
<li>JSON-ST：波形图。</li>
                     * 
                     */
                    void SetSubItemType(const std::string& _subItemType);

                    /**
                     * 判断参数 SubItemType 是否已赋值
                     * @return SubItemType 是否已赋值
                     * 
                     */
                    bool SubItemTypeHasBeenSet() const;

                private:

                    /**
                     * 歌曲ID
                     */
                    std::string m_itemId;
                    bool m_itemIdHasBeenSet;

                    /**
                     * 格式，可选项，可不填写，默认值为：LRC-LRC。
<li>LRC-LRC：歌词；</li>
<li>JSON-ST：波形图。</li>
                     */
                    std::string m_subItemType;
                    bool m_subItemTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AME_V20190916_MODEL_DESCRIBELYRICREQUEST_H_
