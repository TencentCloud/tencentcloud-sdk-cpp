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

#ifndef TENCENTCLOUD_THPC_V20230321_MODEL_STORAGEOPTIONOVERVIEW_H_
#define TENCENTCLOUD_THPC_V20230321_MODEL_STORAGEOPTIONOVERVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/thpc/v20230321/model/CFSOptionOverview.h>
#include <tencentcloud/thpc/v20230321/model/GooseFSOptionOverview.h>
#include <tencentcloud/thpc/v20230321/model/GooseFSxOptionOverview.h>
#include <tencentcloud/thpc/v20230321/model/CosOptionOverview.h>


namespace TencentCloud
{
    namespace Thpc
    {
        namespace V20230321
        {
            namespace Model
            {
                /**
                * 集群存储选项概览信息。
                */
                class StorageOptionOverview : public AbstractModel
                {
                public:
                    StorageOptionOverview();
                    ~StorageOptionOverview() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>CFS存储选项概览信息列表。</p>
                     * @return CFSOptions <p>CFS存储选项概览信息列表。</p>
                     * 
                     */
                    std::vector<CFSOptionOverview> GetCFSOptions() const;

                    /**
                     * 设置<p>CFS存储选项概览信息列表。</p>
                     * @param _cFSOptions <p>CFS存储选项概览信息列表。</p>
                     * 
                     */
                    void SetCFSOptions(const std::vector<CFSOptionOverview>& _cFSOptions);

                    /**
                     * 判断参数 CFSOptions 是否已赋值
                     * @return CFSOptions 是否已赋值
                     * 
                     */
                    bool CFSOptionsHasBeenSet() const;

                    /**
                     * 获取<p>GooseFS存储选项概览信息列表。</p>
                     * @return GooseFSOptions <p>GooseFS存储选项概览信息列表。</p>
                     * 
                     */
                    std::vector<GooseFSOptionOverview> GetGooseFSOptions() const;

                    /**
                     * 设置<p>GooseFS存储选项概览信息列表。</p>
                     * @param _gooseFSOptions <p>GooseFS存储选项概览信息列表。</p>
                     * 
                     */
                    void SetGooseFSOptions(const std::vector<GooseFSOptionOverview>& _gooseFSOptions);

                    /**
                     * 判断参数 GooseFSOptions 是否已赋值
                     * @return GooseFSOptions 是否已赋值
                     * 
                     */
                    bool GooseFSOptionsHasBeenSet() const;

                    /**
                     * 获取<p>GooseFSx存储选项概览信息列表。</p>
                     * @return GooseFSxOptions <p>GooseFSx存储选项概览信息列表。</p>
                     * 
                     */
                    std::vector<GooseFSxOptionOverview> GetGooseFSxOptions() const;

                    /**
                     * 设置<p>GooseFSx存储选项概览信息列表。</p>
                     * @param _gooseFSxOptions <p>GooseFSx存储选项概览信息列表。</p>
                     * 
                     */
                    void SetGooseFSxOptions(const std::vector<GooseFSxOptionOverview>& _gooseFSxOptions);

                    /**
                     * 判断参数 GooseFSxOptions 是否已赋值
                     * @return GooseFSxOptions 是否已赋值
                     * 
                     */
                    bool GooseFSxOptionsHasBeenSet() const;

                    /**
                     * 获取<p>COS存储选项概览信息列表。</p>
                     * @return CosOptions <p>COS存储选项概览信息列表。</p>
                     * 
                     */
                    std::vector<CosOptionOverview> GetCosOptions() const;

                    /**
                     * 设置<p>COS存储选项概览信息列表。</p>
                     * @param _cosOptions <p>COS存储选项概览信息列表。</p>
                     * 
                     */
                    void SetCosOptions(const std::vector<CosOptionOverview>& _cosOptions);

                    /**
                     * 判断参数 CosOptions 是否已赋值
                     * @return CosOptions 是否已赋值
                     * 
                     */
                    bool CosOptionsHasBeenSet() const;

                private:

                    /**
                     * <p>CFS存储选项概览信息列表。</p>
                     */
                    std::vector<CFSOptionOverview> m_cFSOptions;
                    bool m_cFSOptionsHasBeenSet;

                    /**
                     * <p>GooseFS存储选项概览信息列表。</p>
                     */
                    std::vector<GooseFSOptionOverview> m_gooseFSOptions;
                    bool m_gooseFSOptionsHasBeenSet;

                    /**
                     * <p>GooseFSx存储选项概览信息列表。</p>
                     */
                    std::vector<GooseFSxOptionOverview> m_gooseFSxOptions;
                    bool m_gooseFSxOptionsHasBeenSet;

                    /**
                     * <p>COS存储选项概览信息列表。</p>
                     */
                    std::vector<CosOptionOverview> m_cosOptions;
                    bool m_cosOptionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_THPC_V20230321_MODEL_STORAGEOPTIONOVERVIEW_H_
