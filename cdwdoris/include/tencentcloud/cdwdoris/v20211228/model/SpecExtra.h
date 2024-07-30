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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_SPECEXTRA_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_SPECEXTRA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * 额外参数
                */
                class SpecExtra : public AbstractModel
                {
                public:
                    SpecExtra();
                    ~SpecExtra() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取要删除的shards
                     * @return DelShards 要删除的shards
                     * @deprecated
                     */
                    std::string GetDelShards() const;

                    /**
                     * 设置要删除的shards
                     * @param _delShards 要删除的shards
                     * @deprecated
                     */
                    void SetDelShards(const std::string& _delShards);

                    /**
                     * 判断参数 DelShards 是否已赋值
                     * @return DelShards 是否已赋值
                     * @deprecated
                     */
                    bool DelShardsHasBeenSet() const;

                    /**
                     * 获取要删除的节点uip
                     * @return DelHosts 要删除的节点uip
                     * 
                     */
                    std::string GetDelHosts() const;

                    /**
                     * 设置要删除的节点uip
                     * @param _delHosts 要删除的节点uip
                     * 
                     */
                    void SetDelHosts(const std::string& _delHosts);

                    /**
                     * 判断参数 DelHosts 是否已赋值
                     * @return DelHosts 是否已赋值
                     * 
                     */
                    bool DelHostsHasBeenSet() const;

                private:

                    /**
                     * 要删除的shards
                     */
                    std::string m_delShards;
                    bool m_delShardsHasBeenSet;

                    /**
                     * 要删除的节点uip
                     */
                    std::string m_delHosts;
                    bool m_delHostsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_SPECEXTRA_H_
