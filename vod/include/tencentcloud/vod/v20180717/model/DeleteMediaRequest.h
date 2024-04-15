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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DELETEMEDIAREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DELETEMEDIAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaDeleteItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * DeleteMedia请求参数结构体
                */
                class DeleteMediaRequest : public AbstractModel
                {
                public:
                    DeleteMediaRequest();
                    ~DeleteMediaRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取媒体文件的唯一标识。
                     * @return FileId 媒体文件的唯一标识。
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置媒体文件的唯一标识。
                     * @param _fileId 媒体文件的唯一标识。
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取<b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * @return SubAppId <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * @param _subAppId <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取指定本次需要删除的部分。默认值为 "[]", 表示删除媒体及其对应的全部视频处理文件。
                     * @return DeleteParts 指定本次需要删除的部分。默认值为 "[]", 表示删除媒体及其对应的全部视频处理文件。
                     * 
                     */
                    std::vector<MediaDeleteItem> GetDeleteParts() const;

                    /**
                     * 设置指定本次需要删除的部分。默认值为 "[]", 表示删除媒体及其对应的全部视频处理文件。
                     * @param _deleteParts 指定本次需要删除的部分。默认值为 "[]", 表示删除媒体及其对应的全部视频处理文件。
                     * 
                     */
                    void SetDeleteParts(const std::vector<MediaDeleteItem>& _deleteParts);

                    /**
                     * 判断参数 DeleteParts 是否已赋值
                     * @return DeleteParts 是否已赋值
                     * 
                     */
                    bool DeletePartsHasBeenSet() const;

                private:

                    /**
                     * 媒体文件的唯一标识。
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 指定本次需要删除的部分。默认值为 "[]", 表示删除媒体及其对应的全部视频处理文件。
                     */
                    std::vector<MediaDeleteItem> m_deleteParts;
                    bool m_deletePartsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DELETEMEDIAREQUEST_H_
