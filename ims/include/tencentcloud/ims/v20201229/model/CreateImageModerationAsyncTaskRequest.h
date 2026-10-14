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

#ifndef TENCENTCLOUD_IMS_V20201229_MODEL_CREATEIMAGEMODERATIONASYNCTASKREQUEST_H_
#define TENCENTCLOUD_IMS_V20201229_MODEL_CREATEIMAGEMODERATIONASYNCTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ims/v20201229/model/User.h>
#include <tencentcloud/ims/v20201229/model/Device.h>


namespace TencentCloud
{
    namespace Ims
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * CreateImageModerationAsyncTask请求参数结构体
                */
                class CreateImageModerationAsyncTaskRequest : public AbstractModel
                {
                public:
                    CreateImageModerationAsyncTaskRequest();
                    ~CreateImageModerationAsyncTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>接收审核信息回调地址，审核过程中产生的所有结果发送至此地址。</p>
                     * @return CallbackUrl <p>接收审核信息回调地址，审核过程中产生的所有结果发送至此地址。</p>
                     * 
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置<p>接收审核信息回调地址，审核过程中产生的所有结果发送至此地址。</p>
                     * @param _callbackUrl <p>接收审核信息回调地址，审核过程中产生的所有结果发送至此地址。</p>
                     * 
                     */
                    void SetCallbackUrl(const std::string& _callbackUrl);

                    /**
                     * 判断参数 CallbackUrl 是否已赋值
                     * @return CallbackUrl 是否已赋值
                     * 
                     */
                    bool CallbackUrlHasBeenSet() const;

                    /**
                     * 获取<p>接口使用的识别策略编号，<strong>该策略编号在控制台上获取</strong>，获取方式请参考快速入门：</p><ul><li>标准内容安全：https://cloud.tencent.com/document/product/1124/135196</li><li>AI 生成识别：https://cloud.tencent.com/document/product/1124/135204</li></ul>
                     * @return BizType <p>接口使用的识别策略编号，<strong>该策略编号在控制台上获取</strong>，获取方式请参考快速入门：</p><ul><li>标准内容安全：https://cloud.tencent.com/document/product/1124/135196</li><li>AI 生成识别：https://cloud.tencent.com/document/product/1124/135204</li></ul>
                     * 
                     */
                    std::string GetBizType() const;

                    /**
                     * 设置<p>接口使用的识别策略编号，<strong>该策略编号在控制台上获取</strong>，获取方式请参考快速入门：</p><ul><li>标准内容安全：https://cloud.tencent.com/document/product/1124/135196</li><li>AI 生成识别：https://cloud.tencent.com/document/product/1124/135204</li></ul>
                     * @param _bizType <p>接口使用的识别策略编号，<strong>该策略编号在控制台上获取</strong>，获取方式请参考快速入门：</p><ul><li>标准内容安全：https://cloud.tencent.com/document/product/1124/135196</li><li>AI 生成识别：https://cloud.tencent.com/document/product/1124/135204</li></ul>
                     * 
                     */
                    void SetBizType(const std::string& _bizType);

                    /**
                     * 判断参数 BizType 是否已赋值
                     * @return BizType 是否已赋值
                     * 
                     */
                    bool BizTypeHasBeenSet() const;

                    /**
                     * 获取<p>该字段表示您为待检测图片分配的数据 ID，作用是方便您对数据进行标识和管理。<br>取值：由英文字母（大小写均可）、数字及四个特殊符号（_，-，@，#）组成，<strong>长度不超过64个字符</strong>。</p>
                     * @return DataId <p>该字段表示您为待检测图片分配的数据 ID，作用是方便您对数据进行标识和管理。<br>取值：由英文字母（大小写均可）、数字及四个特殊符号（_，-，@，#）组成，<strong>长度不超过64个字符</strong>。</p>
                     * 
                     */
                    std::string GetDataId() const;

                    /**
                     * 设置<p>该字段表示您为待检测图片分配的数据 ID，作用是方便您对数据进行标识和管理。<br>取值：由英文字母（大小写均可）、数字及四个特殊符号（_，-，@，#）组成，<strong>长度不超过64个字符</strong>。</p>
                     * @param _dataId <p>该字段表示您为待检测图片分配的数据 ID，作用是方便您对数据进行标识和管理。<br>取值：由英文字母（大小写均可）、数字及四个特殊符号（_，-，@，#）组成，<strong>长度不超过64个字符</strong>。</p>
                     * 
                     */
                    void SetDataId(const std::string& _dataId);

                    /**
                     * 判断参数 DataId 是否已赋值
                     * @return DataId 是否已赋值
                     * 
                     */
                    bool DataIdHasBeenSet() const;

                    /**
                     * 获取<p>待检测图片的 Base64 编码， <strong>该字段与FileUrl必须选择输入其中一个</strong>。</p>
                     * @return FileContent <p>待检测图片的 Base64 编码， <strong>该字段与FileUrl必须选择输入其中一个</strong>。</p>
                     * 
                     */
                    std::string GetFileContent() const;

                    /**
                     * 设置<p>待检测图片的 Base64 编码， <strong>该字段与FileUrl必须选择输入其中一个</strong>。</p>
                     * @param _fileContent <p>待检测图片的 Base64 编码， <strong>该字段与FileUrl必须选择输入其中一个</strong>。</p>
                     * 
                     */
                    void SetFileContent(const std::string& _fileContent);

                    /**
                     * 判断参数 FileContent 是否已赋值
                     * @return FileContent 是否已赋值
                     * 
                     */
                    bool FileContentHasBeenSet() const;

                    /**
                     * 获取<p>待检测图片的访问链接，<strong>该字段与FileContent必须选择输入其中一个</strong>。</p>
                     * @return FileUrl <p>待检测图片的访问链接，<strong>该字段与FileContent必须选择输入其中一个</strong>。</p>
                     * 
                     */
                    std::string GetFileUrl() const;

                    /**
                     * 设置<p>待检测图片的访问链接，<strong>该字段与FileContent必须选择输入其中一个</strong>。</p>
                     * @param _fileUrl <p>待检测图片的访问链接，<strong>该字段与FileContent必须选择输入其中一个</strong>。</p>
                     * 
                     */
                    void SetFileUrl(const std::string& _fileUrl);

                    /**
                     * 判断参数 FileUrl 是否已赋值
                     * @return FileUrl 是否已赋值
                     * 
                     */
                    bool FileUrlHasBeenSet() const;

                    /**
                     * 获取<p>用于 GIF 检测，表示截帧频率（每隔多少帧抽取一帧进行检测）。<br>建议与  MaxFrames 字段组合使用，例如  Interval=3、 MaxFrames=4，表示每 3 帧抽取 1 帧，最多检测 4 帧。默认值为 0，表示仅检测 GIF 第一帧</p>
                     * @return Interval <p>用于 GIF 检测，表示截帧频率（每隔多少帧抽取一帧进行检测）。<br>建议与  MaxFrames 字段组合使用，例如  Interval=3、 MaxFrames=4，表示每 3 帧抽取 1 帧，最多检测 4 帧。默认值为 0，表示仅检测 GIF 第一帧</p>
                     * 
                     */
                    int64_t GetInterval() const;

                    /**
                     * 设置<p>用于 GIF 检测，表示截帧频率（每隔多少帧抽取一帧进行检测）。<br>建议与  MaxFrames 字段组合使用，例如  Interval=3、 MaxFrames=4，表示每 3 帧抽取 1 帧，最多检测 4 帧。默认值为 0，表示仅检测 GIF 第一帧</p>
                     * @param _interval <p>用于 GIF 检测，表示截帧频率（每隔多少帧抽取一帧进行检测）。<br>建议与  MaxFrames 字段组合使用，例如  Interval=3、 MaxFrames=4，表示每 3 帧抽取 1 帧，最多检测 4 帧。默认值为 0，表示仅检测 GIF 第一帧</p>
                     * 
                     */
                    void SetInterval(const int64_t& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取<p>用于 GIF 检测，指定最大截帧数量，上限为 5 帧（暂不支持上调至更高值）。<br>建议与  Interval 字段配合使用：例如  Interval=3、 MaxFrames=4，表示每 3 帧抽取 1 帧，最多检测 4 帧。默认值为 1，即仅检测 GIF 首帧。</p>
                     * @return MaxFrames <p>用于 GIF 检测，指定最大截帧数量，上限为 5 帧（暂不支持上调至更高值）。<br>建议与  Interval 字段配合使用：例如  Interval=3、 MaxFrames=4，表示每 3 帧抽取 1 帧，最多检测 4 帧。默认值为 1，即仅检测 GIF 首帧。</p>
                     * 
                     */
                    int64_t GetMaxFrames() const;

                    /**
                     * 设置<p>用于 GIF 检测，指定最大截帧数量，上限为 5 帧（暂不支持上调至更高值）。<br>建议与  Interval 字段配合使用：例如  Interval=3、 MaxFrames=4，表示每 3 帧抽取 1 帧，最多检测 4 帧。默认值为 1，即仅检测 GIF 首帧。</p>
                     * @param _maxFrames <p>用于 GIF 检测，指定最大截帧数量，上限为 5 帧（暂不支持上调至更高值）。<br>建议与  Interval 字段配合使用：例如  Interval=3、 MaxFrames=4，表示每 3 帧抽取 1 帧，最多检测 4 帧。默认值为 1，即仅检测 GIF 首帧。</p>
                     * 
                     */
                    void SetMaxFrames(const int64_t& _maxFrames);

                    /**
                     * 判断参数 MaxFrames 是否已赋值
                     * @return MaxFrames 是否已赋值
                     * 
                     */
                    bool MaxFramesHasBeenSet() const;

                    /**
                     * 获取<p>该字段标识用户信息，传入后可增强甄别有违规风险的发布者账号。</p>
                     * @return User <p>该字段标识用户信息，传入后可增强甄别有违规风险的发布者账号。</p>
                     * 
                     */
                    User GetUser() const;

                    /**
                     * 设置<p>该字段标识用户信息，传入后可增强甄别有违规风险的发布者账号。</p>
                     * @param _user <p>该字段标识用户信息，传入后可增强甄别有违规风险的发布者账号。</p>
                     * 
                     */
                    void SetUser(const User& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取<p>该字段标识设备信息，传入后可增强甄别有违规风险的发布者设备。</p>
                     * @return Device <p>该字段标识设备信息，传入后可增强甄别有违规风险的发布者设备。</p>
                     * 
                     */
                    Device GetDevice() const;

                    /**
                     * 设置<p>该字段标识设备信息，传入后可增强甄别有违规风险的发布者设备。</p>
                     * @param _device <p>该字段标识设备信息，传入后可增强甄别有违规风险的发布者设备。</p>
                     * 
                     */
                    void SetDevice(const Device& _device);

                    /**
                     * 判断参数 Device 是否已赋值
                     * @return Device 是否已赋值
                     * 
                     */
                    bool DeviceHasBeenSet() const;

                    /**
                     * 获取<p>服务类型，可为空，默认为 IMAGE。</p><p>枚举值：</p><ul><li>IMAGE： 标准内容安全</li><li>IMAGE_AIGC： AI 生成识别</li></ul>
                     * @return Type <p>服务类型，可为空，默认为 IMAGE。</p><p>枚举值：</p><ul><li>IMAGE： 标准内容安全</li><li>IMAGE_AIGC： AI 生成识别</li></ul>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>服务类型，可为空，默认为 IMAGE。</p><p>枚举值：</p><ul><li>IMAGE： 标准内容安全</li><li>IMAGE_AIGC： AI 生成识别</li></ul>
                     * @param _type <p>服务类型，可为空，默认为 IMAGE。</p><p>枚举值：</p><ul><li>IMAGE： 标准内容安全</li><li>IMAGE_AIGC： AI 生成识别</li></ul>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>审核 Agent 专用：待审核图片的访问链接 ，一次请求最多支持传入 4 张。</p>
                     * @return FileUrlList <p>审核 Agent 专用：待审核图片的访问链接 ，一次请求最多支持传入 4 张。</p>
                     * 
                     */
                    std::vector<std::string> GetFileUrlList() const;

                    /**
                     * 设置<p>审核 Agent 专用：待审核图片的访问链接 ，一次请求最多支持传入 4 张。</p>
                     * @param _fileUrlList <p>审核 Agent 专用：待审核图片的访问链接 ，一次请求最多支持传入 4 张。</p>
                     * 
                     */
                    void SetFileUrlList(const std::vector<std::string>& _fileUrlList);

                    /**
                     * 判断参数 FileUrlList 是否已赋值
                     * @return FileUrlList 是否已赋值
                     * 
                     */
                    bool FileUrlListHasBeenSet() const;

                    /**
                     * 获取<p>审核 Agent 专用：待审文本内容，需使用 UTF-8 编码并以 Base64 格式传入，字数上限 5000 字。</p>
                     * @return TextContent <p>审核 Agent 专用：待审文本内容，需使用 UTF-8 编码并以 Base64 格式传入，字数上限 5000 字。</p>
                     * 
                     */
                    std::string GetTextContent() const;

                    /**
                     * 设置<p>审核 Agent 专用：待审文本内容，需使用 UTF-8 编码并以 Base64 格式传入，字数上限 5000 字。</p>
                     * @param _textContent <p>审核 Agent 专用：待审文本内容，需使用 UTF-8 编码并以 Base64 格式传入，字数上限 5000 字。</p>
                     * 
                     */
                    void SetTextContent(const std::string& _textContent);

                    /**
                     * 判断参数 TextContent 是否已赋值
                     * @return TextContent 是否已赋值
                     * 
                     */
                    bool TextContentHasBeenSet() const;

                private:

                    /**
                     * <p>接收审核信息回调地址，审核过程中产生的所有结果发送至此地址。</p>
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                    /**
                     * <p>接口使用的识别策略编号，<strong>该策略编号在控制台上获取</strong>，获取方式请参考快速入门：</p><ul><li>标准内容安全：https://cloud.tencent.com/document/product/1124/135196</li><li>AI 生成识别：https://cloud.tencent.com/document/product/1124/135204</li></ul>
                     */
                    std::string m_bizType;
                    bool m_bizTypeHasBeenSet;

                    /**
                     * <p>该字段表示您为待检测图片分配的数据 ID，作用是方便您对数据进行标识和管理。<br>取值：由英文字母（大小写均可）、数字及四个特殊符号（_，-，@，#）组成，<strong>长度不超过64个字符</strong>。</p>
                     */
                    std::string m_dataId;
                    bool m_dataIdHasBeenSet;

                    /**
                     * <p>待检测图片的 Base64 编码， <strong>该字段与FileUrl必须选择输入其中一个</strong>。</p>
                     */
                    std::string m_fileContent;
                    bool m_fileContentHasBeenSet;

                    /**
                     * <p>待检测图片的访问链接，<strong>该字段与FileContent必须选择输入其中一个</strong>。</p>
                     */
                    std::string m_fileUrl;
                    bool m_fileUrlHasBeenSet;

                    /**
                     * <p>用于 GIF 检测，表示截帧频率（每隔多少帧抽取一帧进行检测）。<br>建议与  MaxFrames 字段组合使用，例如  Interval=3、 MaxFrames=4，表示每 3 帧抽取 1 帧，最多检测 4 帧。默认值为 0，表示仅检测 GIF 第一帧</p>
                     */
                    int64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * <p>用于 GIF 检测，指定最大截帧数量，上限为 5 帧（暂不支持上调至更高值）。<br>建议与  Interval 字段配合使用：例如  Interval=3、 MaxFrames=4，表示每 3 帧抽取 1 帧，最多检测 4 帧。默认值为 1，即仅检测 GIF 首帧。</p>
                     */
                    int64_t m_maxFrames;
                    bool m_maxFramesHasBeenSet;

                    /**
                     * <p>该字段标识用户信息，传入后可增强甄别有违规风险的发布者账号。</p>
                     */
                    User m_user;
                    bool m_userHasBeenSet;

                    /**
                     * <p>该字段标识设备信息，传入后可增强甄别有违规风险的发布者设备。</p>
                     */
                    Device m_device;
                    bool m_deviceHasBeenSet;

                    /**
                     * <p>服务类型，可为空，默认为 IMAGE。</p><p>枚举值：</p><ul><li>IMAGE： 标准内容安全</li><li>IMAGE_AIGC： AI 生成识别</li></ul>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>审核 Agent 专用：待审核图片的访问链接 ，一次请求最多支持传入 4 张。</p>
                     */
                    std::vector<std::string> m_fileUrlList;
                    bool m_fileUrlListHasBeenSet;

                    /**
                     * <p>审核 Agent 专用：待审文本内容，需使用 UTF-8 编码并以 Base64 格式传入，字数上限 5000 字。</p>
                     */
                    std::string m_textContent;
                    bool m_textContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IMS_V20201229_MODEL_CREATEIMAGEMODERATIONASYNCTASKREQUEST_H_
