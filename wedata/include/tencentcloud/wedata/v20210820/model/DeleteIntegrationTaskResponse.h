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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DELETEINTEGRATIONTASKRESPONSE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DELETEINTEGRATIONTASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DeleteIntegrationTask返回参数结构体
                */
                class DeleteIntegrationTaskResponse : public AbstractModel
                {
                public:
                    DeleteIntegrationTaskResponse();
                    ~DeleteIntegrationTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务删除成功与否标识
                     * @return Data 任务删除成功与否标识
                     * 
                     */
                    bool GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取任务删除成功与否标识
0表示删除成功
1 表示失败，失败原因见 DeleteErrInfo
100 表示running or suspend task can't be deleted失败，失败原因也会写到DeleteErrInfo里面
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeleteFlag 任务删除成功与否标识
0表示删除成功
1 表示失败，失败原因见 DeleteErrInfo
100 表示running or suspend task can't be deleted失败，失败原因也会写到DeleteErrInfo里面
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDeleteFlag() const;

                    /**
                     * 判断参数 DeleteFlag 是否已赋值
                     * @return DeleteFlag 是否已赋值
                     * 
                     */
                    bool DeleteFlagHasBeenSet() const;

                    /**
                     * 获取删除失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeleteErrInfo 删除失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDeleteErrInfo() const;

                    /**
                     * 判断参数 DeleteErrInfo 是否已赋值
                     * @return DeleteErrInfo 是否已赋值
                     * 
                     */
                    bool DeleteErrInfoHasBeenSet() const;

                private:

                    /**
                     * 任务删除成功与否标识
                     */
                    bool m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 任务删除成功与否标识
0表示删除成功
1 表示失败，失败原因见 DeleteErrInfo
100 表示running or suspend task can't be deleted失败，失败原因也会写到DeleteErrInfo里面
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_deleteFlag;
                    bool m_deleteFlagHasBeenSet;

                    /**
                     * 删除失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deleteErrInfo;
                    bool m_deleteErrInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DELETEINTEGRATIONTASKRESPONSE_H_
