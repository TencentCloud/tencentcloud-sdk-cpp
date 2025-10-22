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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_RESOLVECOUNTALIASITEM_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_RESOLVECOUNTALIASITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dnspod/v20210323/model/ResolveCountInfo.h>
#include <tencentcloud/dnspod/v20210323/model/ResolveCountDataItem.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * 域名别名解析量统计信息
                */
                class ResolveCountAliasItem : public AbstractModel
                {
                public:
                    ResolveCountAliasItem();
                    ~ResolveCountAliasItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取域名解析量统计信息
                     * @return Info 域名解析量统计信息
                     * 
                     */
                    ResolveCountInfo GetInfo() const;

                    /**
                     * 设置域名解析量统计信息
                     * @param _info 域名解析量统计信息
                     * 
                     */
                    void SetInfo(const ResolveCountInfo& _info);

                    /**
                     * 判断参数 Info 是否已赋值
                     * @return Info 是否已赋值
                     * 
                     */
                    bool InfoHasBeenSet() const;

                    /**
                     * 获取解析量明细
                     * @return Data 解析量明细
                     * 
                     */
                    std::vector<ResolveCountDataItem> GetData() const;

                    /**
                     * 设置解析量明细
                     * @param _data 解析量明细
                     * 
                     */
                    void SetData(const std::vector<ResolveCountDataItem>& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 域名解析量统计信息
                     */
                    ResolveCountInfo m_info;
                    bool m_infoHasBeenSet;

                    /**
                     * 解析量明细
                     */
                    std::vector<ResolveCountDataItem> m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_RESOLVECOUNTALIASITEM_H_
