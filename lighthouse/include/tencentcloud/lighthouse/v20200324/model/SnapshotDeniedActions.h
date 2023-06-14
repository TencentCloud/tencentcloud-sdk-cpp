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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_SNAPSHOTDENIEDACTIONS_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_SNAPSHOTDENIEDACTIONS_H_

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
                * 快照操作限制列表。
                */
                class SnapshotDeniedActions : public AbstractModel
                {
                public:
                    SnapshotDeniedActions();
                    ~SnapshotDeniedActions() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取快照 ID。
                     * @return SnapshotId 快照 ID。
                     * 
                     */
                    std::string GetSnapshotId() const;

                    /**
                     * 设置快照 ID。
                     * @param _snapshotId 快照 ID。
                     * 
                     */
                    void SetSnapshotId(const std::string& _snapshotId);

                    /**
                     * 判断参数 SnapshotId 是否已赋值
                     * @return SnapshotId 是否已赋值
                     * 
                     */
                    bool SnapshotIdHasBeenSet() const;

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
                     * 快照 ID。
                     */
                    std::string m_snapshotId;
                    bool m_snapshotIdHasBeenSet;

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

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_SNAPSHOTDENIEDACTIONS_H_
