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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MEDIASNAPSHOTBYTIMEOFFSETITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MEDIASNAPSHOTBYTIMEOFFSETITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/MediaSnapshotByTimePicInfoItem.h>
#include <tencentcloud/mps/v20190612/model/TaskOutputStorage.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 点播文件指定时间点截图信息
                */
                class MediaSnapshotByTimeOffsetItem : public AbstractModel
                {
                public:
                    MediaSnapshotByTimeOffsetItem();
                    ~MediaSnapshotByTimeOffsetItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取指定时间点截图规格，参见[指定时间点截图参数模板](https://cloud.tencent.com/document/product/266/33480#.E6.97.B6.E9.97.B4.E7.82.B9.E6.88.AA.E5.9B.BE.E6.A8.A1.E6.9D.BF)。
                     * @return Definition 指定时间点截图规格，参见[指定时间点截图参数模板](https://cloud.tencent.com/document/product/266/33480#.E6.97.B6.E9.97.B4.E7.82.B9.E6.88.AA.E5.9B.BE.E6.A8.A1.E6.9D.BF)。
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置指定时间点截图规格，参见[指定时间点截图参数模板](https://cloud.tencent.com/document/product/266/33480#.E6.97.B6.E9.97.B4.E7.82.B9.E6.88.AA.E5.9B.BE.E6.A8.A1.E6.9D.BF)。
                     * @param _definition 指定时间点截图规格，参见[指定时间点截图参数模板](https://cloud.tencent.com/document/product/266/33480#.E6.97.B6.E9.97.B4.E7.82.B9.E6.88.AA.E5.9B.BE.E6.A8.A1.E6.9D.BF)。
                     * 
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取同一规格的截图信息集合，每个元素代表一张截图。
                     * @return PicInfoSet 同一规格的截图信息集合，每个元素代表一张截图。
                     * 
                     */
                    std::vector<MediaSnapshotByTimePicInfoItem> GetPicInfoSet() const;

                    /**
                     * 设置同一规格的截图信息集合，每个元素代表一张截图。
                     * @param _picInfoSet 同一规格的截图信息集合，每个元素代表一张截图。
                     * 
                     */
                    void SetPicInfoSet(const std::vector<MediaSnapshotByTimePicInfoItem>& _picInfoSet);

                    /**
                     * 判断参数 PicInfoSet 是否已赋值
                     * @return PicInfoSet 是否已赋值
                     * 
                     */
                    bool PicInfoSetHasBeenSet() const;

                    /**
                     * 获取指定时间点截图文件的存储位置。
                     * @return Storage 指定时间点截图文件的存储位置。
                     * 
                     */
                    TaskOutputStorage GetStorage() const;

                    /**
                     * 设置指定时间点截图文件的存储位置。
                     * @param _storage 指定时间点截图文件的存储位置。
                     * 
                     */
                    void SetStorage(const TaskOutputStorage& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     * 
                     */
                    bool StorageHasBeenSet() const;

                private:

                    /**
                     * 指定时间点截图规格，参见[指定时间点截图参数模板](https://cloud.tencent.com/document/product/266/33480#.E6.97.B6.E9.97.B4.E7.82.B9.E6.88.AA.E5.9B.BE.E6.A8.A1.E6.9D.BF)。
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * 同一规格的截图信息集合，每个元素代表一张截图。
                     */
                    std::vector<MediaSnapshotByTimePicInfoItem> m_picInfoSet;
                    bool m_picInfoSetHasBeenSet;

                    /**
                     * 指定时间点截图文件的存储位置。
                     */
                    TaskOutputStorage m_storage;
                    bool m_storageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MEDIASNAPSHOTBYTIMEOFFSETITEM_H_
