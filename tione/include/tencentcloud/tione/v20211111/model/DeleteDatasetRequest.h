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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_DELETEDATASETREQUEST_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_DELETEDATASETREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * DeleteDataset请求参数结构体
                */
                class DeleteDatasetRequest : public AbstractModel
                {
                public:
                    DeleteDatasetRequest();
                    ~DeleteDatasetRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数据集id
                     * @return DatasetId 数据集id
                     * 
                     */
                    std::string GetDatasetId() const;

                    /**
                     * 设置数据集id
                     * @param _datasetId 数据集id
                     * 
                     */
                    void SetDatasetId(const std::string& _datasetId);

                    /**
                     * 判断参数 DatasetId 是否已赋值
                     * @return DatasetId 是否已赋值
                     * 
                     */
                    bool DatasetIdHasBeenSet() const;

                    /**
                     * 获取是否删除cos标签文件
                     * @return DeleteLabelEnable 是否删除cos标签文件
                     * 
                     */
                    bool GetDeleteLabelEnable() const;

                    /**
                     * 设置是否删除cos标签文件
                     * @param _deleteLabelEnable 是否删除cos标签文件
                     * 
                     */
                    void SetDeleteLabelEnable(const bool& _deleteLabelEnable);

                    /**
                     * 判断参数 DeleteLabelEnable 是否已赋值
                     * @return DeleteLabelEnable 是否已赋值
                     * 
                     */
                    bool DeleteLabelEnableHasBeenSet() const;

                private:

                    /**
                     * 数据集id
                     */
                    std::string m_datasetId;
                    bool m_datasetIdHasBeenSet;

                    /**
                     * 是否删除cos标签文件
                     */
                    bool m_deleteLabelEnable;
                    bool m_deleteLabelEnableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_DELETEDATASETREQUEST_H_
