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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_FLOWOPERATELIMIT_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_FLOWOPERATELIMIT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 发起合同流程时对合同流程的部分操作加以限制的配置。
                */
                class FlowOperateLimit : public AbstractModel
                {
                public:
                    FlowOperateLimit();
                    ~FlowOperateLimit() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取发起合同流程时，对签署完成后是否能发起对应的解除合同加以限制：<ul><li><b>false（默认值）</b>: 合同流程完成签署后，支持发起对应的解除协议。</li><li><b>true </b>: 合同流程完成签署后，<b>不支持</b>发起对应的解除协议。</li></ul>
                     * @return NoRelease 发起合同流程时，对签署完成后是否能发起对应的解除合同加以限制：<ul><li><b>false（默认值）</b>: 合同流程完成签署后，支持发起对应的解除协议。</li><li><b>true </b>: 合同流程完成签署后，<b>不支持</b>发起对应的解除协议。</li></ul>
                     * 
                     */
                    bool GetNoRelease() const;

                    /**
                     * 设置发起合同流程时，对签署完成后是否能发起对应的解除合同加以限制：<ul><li><b>false（默认值）</b>: 合同流程完成签署后，支持发起对应的解除协议。</li><li><b>true </b>: 合同流程完成签署后，<b>不支持</b>发起对应的解除协议。</li></ul>
                     * @param _noRelease 发起合同流程时，对签署完成后是否能发起对应的解除合同加以限制：<ul><li><b>false（默认值）</b>: 合同流程完成签署后，支持发起对应的解除协议。</li><li><b>true </b>: 合同流程完成签署后，<b>不支持</b>发起对应的解除协议。</li></ul>
                     * 
                     */
                    void SetNoRelease(const bool& _noRelease);

                    /**
                     * 判断参数 NoRelease 是否已赋值
                     * @return NoRelease 是否已赋值
                     * 
                     */
                    bool NoReleaseHasBeenSet() const;

                private:

                    /**
                     * 发起合同流程时，对签署完成后是否能发起对应的解除合同加以限制：<ul><li><b>false（默认值）</b>: 合同流程完成签署后，支持发起对应的解除协议。</li><li><b>true </b>: 合同流程完成签署后，<b>不支持</b>发起对应的解除协议。</li></ul>
                     */
                    bool m_noRelease;
                    bool m_noReleaseHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_FLOWOPERATELIMIT_H_
