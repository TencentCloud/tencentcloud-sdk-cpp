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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_REWRITELOCATIONMAP_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_REWRITELOCATIONMAP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * 转发规则之间的重定向关系
                */
                class RewriteLocationMap : public AbstractModel
                {
                public:
                    RewriteLocationMap();
                    ~RewriteLocationMap() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取源转发规则ID
                     * @return SourceLocationId 源转发规则ID
                     */
                    std::string GetSourceLocationId() const;

                    /**
                     * 设置源转发规则ID
                     * @param SourceLocationId 源转发规则ID
                     */
                    void SetSourceLocationId(const std::string& _sourceLocationId);

                    /**
                     * 判断参数 SourceLocationId 是否已赋值
                     * @return SourceLocationId 是否已赋值
                     */
                    bool SourceLocationIdHasBeenSet() const;

                    /**
                     * 获取重定向至的目标转发规则ID
                     * @return TargetLocationId 重定向至的目标转发规则ID
                     */
                    std::string GetTargetLocationId() const;

                    /**
                     * 设置重定向至的目标转发规则ID
                     * @param TargetLocationId 重定向至的目标转发规则ID
                     */
                    void SetTargetLocationId(const std::string& _targetLocationId);

                    /**
                     * 判断参数 TargetLocationId 是否已赋值
                     * @return TargetLocationId 是否已赋值
                     */
                    bool TargetLocationIdHasBeenSet() const;

                private:

                    /**
                     * 源转发规则ID
                     */
                    std::string m_sourceLocationId;
                    bool m_sourceLocationIdHasBeenSet;

                    /**
                     * 重定向至的目标转发规则ID
                     */
                    std::string m_targetLocationId;
                    bool m_targetLocationIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_REWRITELOCATIONMAP_H_
