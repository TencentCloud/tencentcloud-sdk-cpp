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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DISKDENIEDACTIONS_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DISKDENIEDACTIONS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lighthouse/v20200324/model/DeniedAction.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * 磁盘操作限制列表详细信息
                */
                class DiskDeniedActions : public AbstractModel
                {
                public:
                    DiskDeniedActions();
                    ~DiskDeniedActions() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取云硬盘ID。
                     * @return DiskId 云硬盘ID。
                     * 
                     */
                    std::string GetDiskId() const;

                    /**
                     * 设置云硬盘ID。
                     * @param _diskId 云硬盘ID。
                     * 
                     */
                    void SetDiskId(const std::string& _diskId);

                    /**
                     * 判断参数 DiskId 是否已赋值
                     * @return DiskId 是否已赋值
                     * 
                     */
                    bool DiskIdHasBeenSet() const;

                    /**
                     * 获取操作限制列表。
                     * @return DeniedActions 操作限制列表。
                     * 
                     */
                    std::vector<DeniedAction> GetDeniedActions() const;

                    /**
                     * 设置操作限制列表。
                     * @param _deniedActions 操作限制列表。
                     * 
                     */
                    void SetDeniedActions(const std::vector<DeniedAction>& _deniedActions);

                    /**
                     * 判断参数 DeniedActions 是否已赋值
                     * @return DeniedActions 是否已赋值
                     * 
                     */
                    bool DeniedActionsHasBeenSet() const;

                private:

                    /**
                     * 云硬盘ID。
                     */
                    std::string m_diskId;
                    bool m_diskIdHasBeenSet;

                    /**
                     * 操作限制列表。
                     */
                    std::vector<DeniedAction> m_deniedActions;
                    bool m_deniedActionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DISKDENIEDACTIONS_H_
