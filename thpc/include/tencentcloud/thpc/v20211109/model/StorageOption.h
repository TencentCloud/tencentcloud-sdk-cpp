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

#ifndef TENCENTCLOUD_THPC_V20211109_MODEL_STORAGEOPTION_H_
#define TENCENTCLOUD_THPC_V20211109_MODEL_STORAGEOPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/thpc/v20211109/model/CFSOption.h>
#include <tencentcloud/thpc/v20211109/model/GooseFSOption.h>


namespace TencentCloud
{
    namespace Thpc
    {
        namespace V20211109
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
                     * 获取集群挂载CFS文件系统选项
                     * @return CFSOptions 集群挂载CFS文件系统选项
                     * 
                     */
                    std::vector<CFSOption> GetCFSOptions() const;

                    /**
                     * 设置集群挂载CFS文件系统选项
                     * @param _cFSOptions 集群挂载CFS文件系统选项
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
                     * 获取集群挂在GooseFS文件系统选项
                     * @return GooseFSOptions 集群挂在GooseFS文件系统选项
                     * 
                     */
                    std::vector<GooseFSOption> GetGooseFSOptions() const;

                    /**
                     * 设置集群挂在GooseFS文件系统选项
                     * @param _gooseFSOptions 集群挂在GooseFS文件系统选项
                     * 
                     */
                    void SetGooseFSOptions(const std::vector<GooseFSOption>& _gooseFSOptions);

                    /**
                     * 判断参数 GooseFSOptions 是否已赋值
                     * @return GooseFSOptions 是否已赋值
                     * 
                     */
                    bool GooseFSOptionsHasBeenSet() const;

                private:

                    /**
                     * 集群挂载CFS文件系统选项
                     */
                    std::vector<CFSOption> m_cFSOptions;
                    bool m_cFSOptionsHasBeenSet;

                    /**
                     * 集群挂在GooseFS文件系统选项
                     */
                    std::vector<GooseFSOption> m_gooseFSOptions;
                    bool m_gooseFSOptionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_THPC_V20211109_MODEL_STORAGEOPTION_H_
