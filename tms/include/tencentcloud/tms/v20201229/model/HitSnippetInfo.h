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

#ifndef TENCENTCLOUD_TMS_V20201229_MODEL_HITSNIPPETINFO_H_
#define TENCENTCLOUD_TMS_V20201229_MODEL_HITSNIPPETINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tms/v20201229/model/HitPosition.h>


namespace TencentCloud
{
    namespace Tms
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * 导致命中审核标签的原文片段信息，如果不命中任何审核标签，则不会有该片段信息，该片段信息只鹰用于辅助分析导致命中审核标签的文本所在位置
                */
                class HitSnippetInfo : public AbstractModel
                {
                public:
                    HitSnippetInfo();
                    ~HitSnippetInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>命中的文本片段（明文），已还原到预处理前的原文，注意该字段内容在原文中可能不连续，需要结合HitSnippetInfos[].Positions来还原出所在原文位置</p>
                     * @return Snippet <p>命中的文本片段（明文），已还原到预处理前的原文，注意该字段内容在原文中可能不连续，需要结合HitSnippetInfos[].Positions来还原出所在原文位置</p>
                     * 
                     */
                    std::string GetSnippet() const;

                    /**
                     * 设置<p>命中的文本片段（明文），已还原到预处理前的原文，注意该字段内容在原文中可能不连续，需要结合HitSnippetInfos[].Positions来还原出所在原文位置</p>
                     * @param _snippet <p>命中的文本片段（明文），已还原到预处理前的原文，注意该字段内容在原文中可能不连续，需要结合HitSnippetInfos[].Positions来还原出所在原文位置</p>
                     * 
                     */
                    void SetSnippet(const std::string& _snippet);

                    /**
                     * 判断参数 Snippet 是否已赋值
                     * @return Snippet 是否已赋值
                     * 
                     */
                    bool SnippetHasBeenSet() const;

                    /**
                     * 获取<p>原子能力类型，如果是业务自定义库命中，会给出词库名称</p>
                     * @return AtomicName <p>原子能力类型，如果是业务自定义库命中，会给出词库名称</p>
                     * 
                     */
                    std::string GetAtomicName() const;

                    /**
                     * 设置<p>原子能力类型，如果是业务自定义库命中，会给出词库名称</p>
                     * @param _atomicName <p>原子能力类型，如果是业务自定义库命中，会给出词库名称</p>
                     * 
                     */
                    void SetAtomicName(const std::string& _atomicName);

                    /**
                     * 判断参数 AtomicName 是否已赋值
                     * @return AtomicName 是否已赋值
                     * 
                     */
                    bool AtomicNameHasBeenSet() const;

                    /**
                     * 获取<p>原子能力ID，如果是业务自定义库导致命中本次审核标签，该值是词库ID</p>
                     * @return AtomicId <p>原子能力ID，如果是业务自定义库导致命中本次审核标签，该值是词库ID</p>
                     * 
                     */
                    std::string GetAtomicId() const;

                    /**
                     * 设置<p>原子能力ID，如果是业务自定义库导致命中本次审核标签，该值是词库ID</p>
                     * @param _atomicId <p>原子能力ID，如果是业务自定义库导致命中本次审核标签，该值是词库ID</p>
                     * 
                     */
                    void SetAtomicId(const std::string& _atomicId);

                    /**
                     * 判断参数 AtomicId 是否已赋值
                     * @return AtomicId 是否已赋值
                     * 
                     */
                    bool AtomicIdHasBeenSet() const;

                    /**
                     * 获取<p>该命中片段在原文中的位置列表，由于文本片段在原文中可能不连续，它可能是有多段位置信息</p>
                     * @return Positions <p>该命中片段在原文中的位置列表，由于文本片段在原文中可能不连续，它可能是有多段位置信息</p>
                     * 
                     */
                    std::vector<HitPosition> GetPositions() const;

                    /**
                     * 设置<p>该命中片段在原文中的位置列表，由于文本片段在原文中可能不连续，它可能是有多段位置信息</p>
                     * @param _positions <p>该命中片段在原文中的位置列表，由于文本片段在原文中可能不连续，它可能是有多段位置信息</p>
                     * 
                     */
                    void SetPositions(const std::vector<HitPosition>& _positions);

                    /**
                     * 判断参数 Positions 是否已赋值
                     * @return Positions 是否已赋值
                     * 
                     */
                    bool PositionsHasBeenSet() const;

                private:

                    /**
                     * <p>命中的文本片段（明文），已还原到预处理前的原文，注意该字段内容在原文中可能不连续，需要结合HitSnippetInfos[].Positions来还原出所在原文位置</p>
                     */
                    std::string m_snippet;
                    bool m_snippetHasBeenSet;

                    /**
                     * <p>原子能力类型，如果是业务自定义库命中，会给出词库名称</p>
                     */
                    std::string m_atomicName;
                    bool m_atomicNameHasBeenSet;

                    /**
                     * <p>原子能力ID，如果是业务自定义库导致命中本次审核标签，该值是词库ID</p>
                     */
                    std::string m_atomicId;
                    bool m_atomicIdHasBeenSet;

                    /**
                     * <p>该命中片段在原文中的位置列表，由于文本片段在原文中可能不连续，它可能是有多段位置信息</p>
                     */
                    std::vector<HitPosition> m_positions;
                    bool m_positionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TMS_V20201229_MODEL_HITSNIPPETINFO_H_
