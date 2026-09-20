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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_AUDITIMAGECREATEDETAIL_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_AUDITIMAGECREATEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * 直播审核图库添加图片详细结果。
                */
                class AuditImageCreateDetail : public AbstractModel
                {
                public:
                    AuditImageCreateDetail();
                    ~AuditImageCreateDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取图片上传状态，0 表示成功，其他表示失败。
10101: url 解码失败。
10102: url 解析失败。
10103: url 不是 cos 地址。
10301: label 不合法。
20101: 数据入库错误。
30101: cos 下载图片连接错误。
30102: cos 下载图片响应错误。
40101: 优图接口调用错误。
                     * @return Status 图片上传状态，0 表示成功，其他表示失败。
10101: url 解码失败。
10102: url 解析失败。
10103: url 不是 cos 地址。
10301: label 不合法。
20101: 数据入库错误。
30101: cos 下载图片连接错误。
30102: cos 下载图片响应错误。
40101: 优图接口调用错误。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置图片上传状态，0 表示成功，其他表示失败。
10101: url 解码失败。
10102: url 解析失败。
10103: url 不是 cos 地址。
10301: label 不合法。
20101: 数据入库错误。
30101: cos 下载图片连接错误。
30102: cos 下载图片响应错误。
40101: 优图接口调用错误。
                     * @param _status 图片上传状态，0 表示成功，其他表示失败。
10101: url 解码失败。
10102: url 解析失败。
10103: url 不是 cos 地址。
10301: label 不合法。
20101: 数据入库错误。
30101: cos 下载图片连接错误。
30102: cos 下载图片响应错误。
40101: 优图接口调用错误。
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取上传的图片 Id。
                     * @return ImageId 上传的图片 Id。
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置上传的图片 Id。
                     * @param _imageId 上传的图片 Id。
                     * 
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取图片上传顺序索引。
                     * @return Index 图片上传顺序索引。
                     * 
                     */
                    std::string GetIndex() const;

                    /**
                     * 设置图片上传顺序索引。
                     * @param _index 图片上传顺序索引。
                     * 
                     */
                    void SetIndex(const std::string& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                private:

                    /**
                     * 图片上传状态，0 表示成功，其他表示失败。
10101: url 解码失败。
10102: url 解析失败。
10103: url 不是 cos 地址。
10301: label 不合法。
20101: 数据入库错误。
30101: cos 下载图片连接错误。
30102: cos 下载图片响应错误。
40101: 优图接口调用错误。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 上传的图片 Id。
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * 图片上传顺序索引。
                     */
                    std::string m_index;
                    bool m_indexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_AUDITIMAGECREATEDETAIL_H_
