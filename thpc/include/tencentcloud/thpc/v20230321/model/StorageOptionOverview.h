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
                     * 获取CFS存储选项概览信息列表。
                     * @return CFSOptions CFS存储选项概览信息列表。
                     * 
                     */
                    std::vector<CFSOptionOverview> GetCFSOptions() const;

                    /**
                     * 设置CFS存储选项概览信息列表。
                     * @param _cFSOptions CFS存储选项概览信息列表。
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
                     * 获取GooseFS存储选项概览信息列表。
                     * @return GooseFSOptions GooseFS存储选项概览信息列表。
                     * 
                     */
                    std::vector<GooseFSOptionOverview> GetGooseFSOptions() const;

                    /**
                     * 设置GooseFS存储选项概览信息列表。
                     * @param _gooseFSOptions GooseFS存储选项概览信息列表。
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
                     * 获取GooseFSx存储选项概览信息列表。
                     * @return GooseFSxOptions GooseFSx存储选项概览信息列表。
                     * 
                     */
                    std::vector<GooseFSxOptionOverview> GetGooseFSxOptions() const;

                    /**
                     * 设置GooseFSx存储选项概览信息列表。
                     * @param _gooseFSxOptions GooseFSx存储选项概览信息列表。
                     * 
                     */
                    void SetGooseFSxOptions(const std::vector<GooseFSxOptionOverview>& _gooseFSxOptions);

                    /**
                     * 判断参数 GooseFSxOptions 是否已赋值
                     * @return GooseFSxOptions 是否已赋值
                     * 
                     */
                    bool GooseFSxOptionsHasBeenSet() const;

                private:

                    /**
                     * CFS存储选项概览信息列表。
                     */
                    std::vector<CFSOptionOverview> m_cFSOptions;
                    bool m_cFSOptionsHasBeenSet;

                    /**
                     * GooseFS存储选项概览信息列表。
                     */
                    std::vector<GooseFSOptionOverview> m_gooseFSOptions;
                    bool m_gooseFSOptionsHasBeenSet;

                    /**
                     * GooseFSx存储选项概览信息列表。
                     */
                    std::vector<GooseFSxOptionOverview> m_gooseFSxOptions;
                    bool m_gooseFSxOptionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_THPC_V20230321_MODEL_STORAGEOPTIONOVERVIEW_H_
