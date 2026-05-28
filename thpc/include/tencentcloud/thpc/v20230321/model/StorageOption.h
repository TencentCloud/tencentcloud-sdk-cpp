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

#ifndef TENCENTCLOUD_THPC_V20230321_MODEL_STORAGEOPTION_H_
#define TENCENTCLOUD_THPC_V20230321_MODEL_STORAGEOPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/thpc/v20230321/model/CFSOption.h>
#include <tencentcloud/thpc/v20230321/model/GooseFSOption.h>
#include <tencentcloud/thpc/v20230321/model/GooseFSxOption.h>
#include <tencentcloud/thpc/v20230321/model/CosOption.h>


namespace TencentCloud
{
    namespace Thpc
    {
        namespace V20230321
        {
            namespace Model
            {
                /**
                * 描述集群文件系统选项
                */
                class StorageOption : public AbstractModel
                {
                public:
                    StorageOption();
                    ~StorageOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>集群挂载CFS文件系统选项。</p>
                     * @return CFSOptions <p>集群挂载CFS文件系统选项。</p>
                     * 
                     */
                    std::vector<CFSOption> GetCFSOptions() const;

                    /**
                     * 设置<p>集群挂载CFS文件系统选项。</p>
                     * @param _cFSOptions <p>集群挂载CFS文件系统选项。</p>
                     * 
                     */
                    void SetCFSOptions(const std::vector<CFSOption>& _cFSOptions);

                    /**
                     * 判断参数 CFSOptions 是否已赋值
                     * @return CFSOptions 是否已赋值
                     * 
                     */
                    bool CFSOptionsHasBeenSet() const;

                    /**
                     * 获取<p>集群挂载GooseFS文件系统选项。</p>
                     * @return GooseFSOptions <p>集群挂载GooseFS文件系统选项。</p>
                     * 
                     */
                    std::vector<GooseFSOption> GetGooseFSOptions() const;

                    /**
                     * 设置<p>集群挂载GooseFS文件系统选项。</p>
                     * @param _gooseFSOptions <p>集群挂载GooseFS文件系统选项。</p>
                     * 
                     */
                    void SetGooseFSOptions(const std::vector<GooseFSOption>& _gooseFSOptions);

                    /**
                     * 判断参数 GooseFSOptions 是否已赋值
                     * @return GooseFSOptions 是否已赋值
                     * 
                     */
                    bool GooseFSOptionsHasBeenSet() const;

                    /**
                     * 获取<p>集群挂载GooseFSx文件系统选项。</p>
                     * @return GooseFSxOptions <p>集群挂载GooseFSx文件系统选项。</p>
                     * 
                     */
                    std::vector<GooseFSxOption> GetGooseFSxOptions() const;

                    /**
                     * 设置<p>集群挂载GooseFSx文件系统选项。</p>
                     * @param _gooseFSxOptions <p>集群挂载GooseFSx文件系统选项。</p>
                     * 
                     */
                    void SetGooseFSxOptions(const std::vector<GooseFSxOption>& _gooseFSxOptions);

                    /**
                     * 判断参数 GooseFSxOptions 是否已赋值
                     * @return GooseFSxOptions 是否已赋值
                     * 
                     */
                    bool GooseFSxOptionsHasBeenSet() const;

                    /**
                     * 获取<p>集群挂载COS文件系统选项。</p>
                     * @return CosOptions <p>集群挂载COS文件系统选项。</p>
                     * 
                     */
                    std::vector<CosOption> GetCosOptions() const;

                    /**
                     * 设置<p>集群挂载COS文件系统选项。</p>
                     * @param _cosOptions <p>集群挂载COS文件系统选项。</p>
                     * 
                     */
                    void SetCosOptions(const std::vector<CosOption>& _cosOptions);

                    /**
                     * 判断参数 CosOptions 是否已赋值
                     * @return CosOptions 是否已赋值
                     * 
                     */
                    bool CosOptionsHasBeenSet() const;

                private:

                    /**
                     * <p>集群挂载CFS文件系统选项。</p>
                     */
                    std::vector<CFSOption> m_cFSOptions;
                    bool m_cFSOptionsHasBeenSet;

                    /**
                     * <p>集群挂载GooseFS文件系统选项。</p>
                     */
                    std::vector<GooseFSOption> m_gooseFSOptions;
                    bool m_gooseFSOptionsHasBeenSet;

                    /**
                     * <p>集群挂载GooseFSx文件系统选项。</p>
                     */
                    std::vector<GooseFSxOption> m_gooseFSxOptions;
                    bool m_gooseFSxOptionsHasBeenSet;

                    /**
                     * <p>集群挂载COS文件系统选项。</p>
                     */
                    std::vector<CosOption> m_cosOptions;
                    bool m_cosOptionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_THPC_V20230321_MODEL_STORAGEOPTION_H_
