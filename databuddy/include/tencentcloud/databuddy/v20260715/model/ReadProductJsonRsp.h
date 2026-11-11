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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_READPRODUCTJSONRSP_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_READPRODUCTJSONRSP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * databuddy 产物json 响应
                */
                class ReadProductJsonRsp : public AbstractModel
                {
                public:
                    ReadProductJsonRsp();
                    ~ReadProductJsonRsp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>文件路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Path <p>文件路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置<p>文件路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _path <p>文件路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取<p>文件大小</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Size <p>文件大小</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSize() const;

                    /**
                     * 设置<p>文件大小</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _size <p>文件大小</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSize(const std::string& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取<p>文件内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Content <p>文件内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置<p>文件内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _content <p>文件内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取<p>请求状态码 0-成功，其他-异常</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResultCode <p>请求状态码 0-成功，其他-异常</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetResultCode() const;

                    /**
                     * 设置<p>请求状态码 0-成功，其他-异常</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resultCode <p>请求状态码 0-成功，其他-异常</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResultCode(const int64_t& _resultCode);

                    /**
                     * 判断参数 ResultCode 是否已赋值
                     * @return ResultCode 是否已赋值
                     * 
                     */
                    bool ResultCodeHasBeenSet() const;

                    /**
                     * 获取<p>返回结果提示信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Message <p>返回结果提示信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置<p>返回结果提示信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _message <p>返回结果提示信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * <p>文件路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * <p>文件大小</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * <p>文件内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * <p>请求状态码 0-成功，其他-异常</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_resultCode;
                    bool m_resultCodeHasBeenSet;

                    /**
                     * <p>返回结果提示信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_READPRODUCTJSONRSP_H_
