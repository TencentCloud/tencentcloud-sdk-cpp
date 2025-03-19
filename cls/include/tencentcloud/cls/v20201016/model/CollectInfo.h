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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_COLLECTINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_COLLECTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/CollectConfig.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 采集配置信息
                */
                class CollectInfo : public AbstractModel
                {
                public:
                    CollectInfo();
                    ~CollectInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取采集类型，必填字段。
<li>0：元数据配置。</li>
<li>1：指定Pod Label。</li>
                     * @return Type 采集类型，必填字段。
<li>0：元数据配置。</li>
<li>1：指定Pod Label。</li>
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置采集类型，必填字段。
<li>0：元数据配置。</li>
<li>1：指定Pod Label。</li>
                     * @param _type 采集类型，必填字段。
<li>0：元数据配置。</li>
<li>1：指定Pod Label。</li>
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取指定采集类型的采集配置信息。
<li>当Type为0时，CollectConfigs不允许为空。</li>
<li>当Type为1时，CollectConfigs为空时，表示选择所有Pod Label；否则CollectConfigs为指定Pod Label。</li>
                     * @return CollectConfigs 指定采集类型的采集配置信息。
<li>当Type为0时，CollectConfigs不允许为空。</li>
<li>当Type为1时，CollectConfigs为空时，表示选择所有Pod Label；否则CollectConfigs为指定Pod Label。</li>
                     * 
                     */
                    std::vector<CollectConfig> GetCollectConfigs() const;

                    /**
                     * 设置指定采集类型的采集配置信息。
<li>当Type为0时，CollectConfigs不允许为空。</li>
<li>当Type为1时，CollectConfigs为空时，表示选择所有Pod Label；否则CollectConfigs为指定Pod Label。</li>
                     * @param _collectConfigs 指定采集类型的采集配置信息。
<li>当Type为0时，CollectConfigs不允许为空。</li>
<li>当Type为1时，CollectConfigs为空时，表示选择所有Pod Label；否则CollectConfigs为指定Pod Label。</li>
                     * 
                     */
                    void SetCollectConfigs(const std::vector<CollectConfig>& _collectConfigs);

                    /**
                     * 判断参数 CollectConfigs 是否已赋值
                     * @return CollectConfigs 是否已赋值
                     * 
                     */
                    bool CollectConfigsHasBeenSet() const;

                private:

                    /**
                     * 采集类型，必填字段。
<li>0：元数据配置。</li>
<li>1：指定Pod Label。</li>
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 指定采集类型的采集配置信息。
<li>当Type为0时，CollectConfigs不允许为空。</li>
<li>当Type为1时，CollectConfigs为空时，表示选择所有Pod Label；否则CollectConfigs为指定Pod Label。</li>
                     */
                    std::vector<CollectConfig> m_collectConfigs;
                    bool m_collectConfigsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_COLLECTINFO_H_
