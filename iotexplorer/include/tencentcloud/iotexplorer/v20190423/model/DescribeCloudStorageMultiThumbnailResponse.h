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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBECLOUDSTORAGEMULTITHUMBNAILRESPONSE_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBECLOUDSTORAGEMULTITHUMBNAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotexplorer/v20190423/model/ThumbnailURLInfoList.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * DescribeCloudStorageMultiThumbnail返回参数结构体
                */
                class DescribeCloudStorageMultiThumbnailResponse : public AbstractModel
                {
                public:
                    DescribeCloudStorageMultiThumbnailResponse();
                    ~DescribeCloudStorageMultiThumbnailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取缩略图访问地址
                     * @return ThumbnailURLInfoList 缩略图访问地址
                     * 
                     */
                    std::vector<ThumbnailURLInfoList> GetThumbnailURLInfoList() const;

                    /**
                     * 判断参数 ThumbnailURLInfoList 是否已赋值
                     * @return ThumbnailURLInfoList 是否已赋值
                     * 
                     */
                    bool ThumbnailURLInfoListHasBeenSet() const;

                private:

                    /**
                     * 缩略图访问地址
                     */
                    std::vector<ThumbnailURLInfoList> m_thumbnailURLInfoList;
                    bool m_thumbnailURLInfoListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBECLOUDSTORAGEMULTITHUMBNAILRESPONSE_H_
