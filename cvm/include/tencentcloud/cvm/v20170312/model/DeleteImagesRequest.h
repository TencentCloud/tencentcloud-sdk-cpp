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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_DELETEIMAGESREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_DELETEIMAGESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DeleteImages请求参数结构体
                */
                class DeleteImagesRequest : public AbstractModel
                {
                public:
                    DeleteImagesRequest();
                    ~DeleteImagesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取删除的镜像 ID 列表。
可通过 [DescribeImages](https://cloud.tencent.com/document/api/213/15715) 接口返回值中的`ImageId`获取。
                     * @return ImageIds 删除的镜像 ID 列表。
可通过 [DescribeImages](https://cloud.tencent.com/document/api/213/15715) 接口返回值中的`ImageId`获取。
                     * 
                     */
                    std::vector<std::string> GetImageIds() const;

                    /**
                     * 设置删除的镜像 ID 列表。
可通过 [DescribeImages](https://cloud.tencent.com/document/api/213/15715) 接口返回值中的`ImageId`获取。
                     * @param _imageIds 删除的镜像 ID 列表。
可通过 [DescribeImages](https://cloud.tencent.com/document/api/213/15715) 接口返回值中的`ImageId`获取。
                     * 
                     */
                    void SetImageIds(const std::vector<std::string>& _imageIds);

                    /**
                     * 判断参数 ImageIds 是否已赋值
                     * @return ImageIds 是否已赋值
                     * 
                     */
                    bool ImageIdsHasBeenSet() const;

                    /**
                     * 获取是否删除镜像关联的快照。
默认值：false
                     * @return DeleteBindedSnap 是否删除镜像关联的快照。
默认值：false
                     * 
                     */
                    bool GetDeleteBindedSnap() const;

                    /**
                     * 设置是否删除镜像关联的快照。
默认值：false
                     * @param _deleteBindedSnap 是否删除镜像关联的快照。
默认值：false
                     * 
                     */
                    void SetDeleteBindedSnap(const bool& _deleteBindedSnap);

                    /**
                     * 判断参数 DeleteBindedSnap 是否已赋值
                     * @return DeleteBindedSnap 是否已赋值
                     * 
                     */
                    bool DeleteBindedSnapHasBeenSet() const;

                    /**
                     * 获取检测是否支持删除镜像。
默认值：false
                     * @return DryRun 检测是否支持删除镜像。
默认值：false
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置检测是否支持删除镜像。
默认值：false
                     * @param _dryRun 检测是否支持删除镜像。
默认值：false
                     * 
                     */
                    void SetDryRun(const bool& _dryRun);

                    /**
                     * 判断参数 DryRun 是否已赋值
                     * @return DryRun 是否已赋值
                     * 
                     */
                    bool DryRunHasBeenSet() const;

                private:

                    /**
                     * 删除的镜像 ID 列表。
可通过 [DescribeImages](https://cloud.tencent.com/document/api/213/15715) 接口返回值中的`ImageId`获取。
                     */
                    std::vector<std::string> m_imageIds;
                    bool m_imageIdsHasBeenSet;

                    /**
                     * 是否删除镜像关联的快照。
默认值：false
                     */
                    bool m_deleteBindedSnap;
                    bool m_deleteBindedSnapHasBeenSet;

                    /**
                     * 检测是否支持删除镜像。
默认值：false
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_DELETEIMAGESREQUEST_H_
