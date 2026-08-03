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
                     * 获取<p>数据集id</p>
                     * @return DatasetId <p>数据集id</p>
                     * 
                     */
                    std::string GetDatasetId() const;

                    /**
                     * 设置<p>数据集id</p>
                     * @param _datasetId <p>数据集id</p>
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
                     * 获取<p>是否删除cos标签文件</p>
                     * @return DeleteLabelEnable <p>是否删除cos标签文件</p>
                     * 
                     */
                    bool GetDeleteLabelEnable() const;

                    /**
                     * 设置<p>是否删除cos标签文件</p>
                     * @param _deleteLabelEnable <p>是否删除cos标签文件</p>
                     * 
                     */
                    void SetDeleteLabelEnable(const bool& _deleteLabelEnable);

                    /**
                     * 判断参数 DeleteLabelEnable 是否已赋值
                     * @return DeleteLabelEnable 是否已赋值
                     * 
                     */
                    bool DeleteLabelEnableHasBeenSet() const;

                    /**
                     * 获取<p>TI工作空间ID</p><p>仅用于“工作空间”白名单功能。如需使用，请联系TI管理员开通白名单。</p>
                     * @return TiProjectId <p>TI工作空间ID</p><p>仅用于“工作空间”白名单功能。如需使用，请联系TI管理员开通白名单。</p>
                     * 
                     */
                    std::string GetTiProjectId() const;

                    /**
                     * 设置<p>TI工作空间ID</p><p>仅用于“工作空间”白名单功能。如需使用，请联系TI管理员开通白名单。</p>
                     * @param _tiProjectId <p>TI工作空间ID</p><p>仅用于“工作空间”白名单功能。如需使用，请联系TI管理员开通白名单。</p>
                     * 
                     */
                    void SetTiProjectId(const std::string& _tiProjectId);

                    /**
                     * 判断参数 TiProjectId 是否已赋值
                     * @return TiProjectId 是否已赋值
                     * 
                     */
                    bool TiProjectIdHasBeenSet() const;

                private:

                    /**
                     * <p>数据集id</p>
                     */
                    std::string m_datasetId;
                    bool m_datasetIdHasBeenSet;

                    /**
                     * <p>是否删除cos标签文件</p>
                     */
                    bool m_deleteLabelEnable;
                    bool m_deleteLabelEnableHasBeenSet;

                    /**
                     * <p>TI工作空间ID</p><p>仅用于“工作空间”白名单功能。如需使用，请联系TI管理员开通白名单。</p>
                     */
                    std::string m_tiProjectId;
                    bool m_tiProjectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_DELETEDATASETREQUEST_H_
