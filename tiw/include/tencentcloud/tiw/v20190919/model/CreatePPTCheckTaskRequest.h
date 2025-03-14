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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_CREATEPPTCHECKTASKREQUEST_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_CREATEPPTCHECKTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * CreatePPTCheckTask请求参数结构体
                */
                class CreatePPTCheckTaskRequest : public AbstractModel
                {
                public:
                    CreatePPTCheckTaskRequest();
                    ~CreatePPTCheckTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取客户的SdkAppId
                     * @return SdkAppId 客户的SdkAppId
                     * 
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置客户的SdkAppId
                     * @param _sdkAppId 客户的SdkAppId
                     * 
                     */
                    void SetSdkAppId(const int64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取经过URL编码后的PPT文件地址。URL 编码会将字符转换为可通过因特网传输的格式，例如文档地址为http://example.com/测试.pptx，经过URL编码之后为http://example.com/%E6%B5%8B%E8%AF%95.pptx。为了提高URL解析的成功率，请对URL进行编码。
                     * @return Url 经过URL编码后的PPT文件地址。URL 编码会将字符转换为可通过因特网传输的格式，例如文档地址为http://example.com/测试.pptx，经过URL编码之后为http://example.com/%E6%B5%8B%E8%AF%95.pptx。为了提高URL解析的成功率，请对URL进行编码。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置经过URL编码后的PPT文件地址。URL 编码会将字符转换为可通过因特网传输的格式，例如文档地址为http://example.com/测试.pptx，经过URL编码之后为http://example.com/%E6%B5%8B%E8%AF%95.pptx。为了提高URL解析的成功率，请对URL进行编码。
                     * @param _url 经过URL编码后的PPT文件地址。URL 编码会将字符转换为可通过因特网传输的格式，例如文档地址为http://example.com/测试.pptx，经过URL编码之后为http://example.com/%E6%B5%8B%E8%AF%95.pptx。为了提高URL解析的成功率，请对URL进行编码。
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取是否对不支持元素开启自动处理的功能，默认不开启。
true -- 开启
false -- 不开启

当设置为`true`时，可配合`AutoHandleUnsupportedElementTypes`参数使用，具体有哪些不兼容元素类型，可参考`AutoHandleUnsupportedElementTypes`参数的说明。
                     * @return AutoHandleUnsupportedElement 是否对不支持元素开启自动处理的功能，默认不开启。
true -- 开启
false -- 不开启

当设置为`true`时，可配合`AutoHandleUnsupportedElementTypes`参数使用，具体有哪些不兼容元素类型，可参考`AutoHandleUnsupportedElementTypes`参数的说明。
                     * 
                     */
                    bool GetAutoHandleUnsupportedElement() const;

                    /**
                     * 设置是否对不支持元素开启自动处理的功能，默认不开启。
true -- 开启
false -- 不开启

当设置为`true`时，可配合`AutoHandleUnsupportedElementTypes`参数使用，具体有哪些不兼容元素类型，可参考`AutoHandleUnsupportedElementTypes`参数的说明。
                     * @param _autoHandleUnsupportedElement 是否对不支持元素开启自动处理的功能，默认不开启。
true -- 开启
false -- 不开启

当设置为`true`时，可配合`AutoHandleUnsupportedElementTypes`参数使用，具体有哪些不兼容元素类型，可参考`AutoHandleUnsupportedElementTypes`参数的说明。
                     * 
                     */
                    void SetAutoHandleUnsupportedElement(const bool& _autoHandleUnsupportedElement);

                    /**
                     * 判断参数 AutoHandleUnsupportedElement 是否已赋值
                     * @return AutoHandleUnsupportedElement 是否已赋值
                     * 
                     */
                    bool AutoHandleUnsupportedElementHasBeenSet() const;

                    /**
                     * 获取此参数仅在`AutoHandleUnsupportedElement`参数为`true`的情况下有效。

指定需要自动处理的不兼容元素类型，默认对所有不兼容的元素进行自动处理。

目前支持检测的不兼容元素类型及对应的自动处理方式如下：
0: 不支持的墨迹类型
-- 自动处理方式：移除墨迹

1: 自动翻页
-- 自动处理方式：移除自动翻页设置，并修改为单击切换

2: 已损坏音视频
-- 自动处理方式：移除对损坏音视频的引用

3: 不可访问资源
-- 自动处理方式：移除对不可访问的资源的引用

4: 只读文件
-- 自动处理方式：移除只读设置

5: 不支持的元素编辑锁定状态
-- 自动处理方式：移除锁定状态

6: 可能有兼容问题的字体
-- 自动处理方式： 不支持处理

7: 设置了柔化边缘的GIF图片
-- 自动处理方式：移除柔化边缘设置

8: 存在不兼容的空格下划线
-- 自动处理方式：通过调整空格下划线前后文本的字体语言体系，保证空格下划线表现正常

9: 存在设置了分段动画的数学公式和文本混合内容
-- 自动处理方式： 不支持处理

10: 存在设置了分段动画的渐变色文本
-- 自动处理方式： 不支持处理

11: 存在不兼容的分散对齐方式
-- 自动处理方式： 不支持处理

12: 存在不兼容的多倍行距设置
-- 自动处理方式： 不支持处理

13: 存在带有特殊符号内容的datetime类型的a:fld标签元素
-- 自动处理方式： a:fld标签替换为普通文本
                     * @return AutoHandleUnsupportedElementTypes 此参数仅在`AutoHandleUnsupportedElement`参数为`true`的情况下有效。

指定需要自动处理的不兼容元素类型，默认对所有不兼容的元素进行自动处理。

目前支持检测的不兼容元素类型及对应的自动处理方式如下：
0: 不支持的墨迹类型
-- 自动处理方式：移除墨迹

1: 自动翻页
-- 自动处理方式：移除自动翻页设置，并修改为单击切换

2: 已损坏音视频
-- 自动处理方式：移除对损坏音视频的引用

3: 不可访问资源
-- 自动处理方式：移除对不可访问的资源的引用

4: 只读文件
-- 自动处理方式：移除只读设置

5: 不支持的元素编辑锁定状态
-- 自动处理方式：移除锁定状态

6: 可能有兼容问题的字体
-- 自动处理方式： 不支持处理

7: 设置了柔化边缘的GIF图片
-- 自动处理方式：移除柔化边缘设置

8: 存在不兼容的空格下划线
-- 自动处理方式：通过调整空格下划线前后文本的字体语言体系，保证空格下划线表现正常

9: 存在设置了分段动画的数学公式和文本混合内容
-- 自动处理方式： 不支持处理

10: 存在设置了分段动画的渐变色文本
-- 自动处理方式： 不支持处理

11: 存在不兼容的分散对齐方式
-- 自动处理方式： 不支持处理

12: 存在不兼容的多倍行距设置
-- 自动处理方式： 不支持处理

13: 存在带有特殊符号内容的datetime类型的a:fld标签元素
-- 自动处理方式： a:fld标签替换为普通文本
                     * 
                     */
                    std::vector<int64_t> GetAutoHandleUnsupportedElementTypes() const;

                    /**
                     * 设置此参数仅在`AutoHandleUnsupportedElement`参数为`true`的情况下有效。

指定需要自动处理的不兼容元素类型，默认对所有不兼容的元素进行自动处理。

目前支持检测的不兼容元素类型及对应的自动处理方式如下：
0: 不支持的墨迹类型
-- 自动处理方式：移除墨迹

1: 自动翻页
-- 自动处理方式：移除自动翻页设置，并修改为单击切换

2: 已损坏音视频
-- 自动处理方式：移除对损坏音视频的引用

3: 不可访问资源
-- 自动处理方式：移除对不可访问的资源的引用

4: 只读文件
-- 自动处理方式：移除只读设置

5: 不支持的元素编辑锁定状态
-- 自动处理方式：移除锁定状态

6: 可能有兼容问题的字体
-- 自动处理方式： 不支持处理

7: 设置了柔化边缘的GIF图片
-- 自动处理方式：移除柔化边缘设置

8: 存在不兼容的空格下划线
-- 自动处理方式：通过调整空格下划线前后文本的字体语言体系，保证空格下划线表现正常

9: 存在设置了分段动画的数学公式和文本混合内容
-- 自动处理方式： 不支持处理

10: 存在设置了分段动画的渐变色文本
-- 自动处理方式： 不支持处理

11: 存在不兼容的分散对齐方式
-- 自动处理方式： 不支持处理

12: 存在不兼容的多倍行距设置
-- 自动处理方式： 不支持处理

13: 存在带有特殊符号内容的datetime类型的a:fld标签元素
-- 自动处理方式： a:fld标签替换为普通文本
                     * @param _autoHandleUnsupportedElementTypes 此参数仅在`AutoHandleUnsupportedElement`参数为`true`的情况下有效。

指定需要自动处理的不兼容元素类型，默认对所有不兼容的元素进行自动处理。

目前支持检测的不兼容元素类型及对应的自动处理方式如下：
0: 不支持的墨迹类型
-- 自动处理方式：移除墨迹

1: 自动翻页
-- 自动处理方式：移除自动翻页设置，并修改为单击切换

2: 已损坏音视频
-- 自动处理方式：移除对损坏音视频的引用

3: 不可访问资源
-- 自动处理方式：移除对不可访问的资源的引用

4: 只读文件
-- 自动处理方式：移除只读设置

5: 不支持的元素编辑锁定状态
-- 自动处理方式：移除锁定状态

6: 可能有兼容问题的字体
-- 自动处理方式： 不支持处理

7: 设置了柔化边缘的GIF图片
-- 自动处理方式：移除柔化边缘设置

8: 存在不兼容的空格下划线
-- 自动处理方式：通过调整空格下划线前后文本的字体语言体系，保证空格下划线表现正常

9: 存在设置了分段动画的数学公式和文本混合内容
-- 自动处理方式： 不支持处理

10: 存在设置了分段动画的渐变色文本
-- 自动处理方式： 不支持处理

11: 存在不兼容的分散对齐方式
-- 自动处理方式： 不支持处理

12: 存在不兼容的多倍行距设置
-- 自动处理方式： 不支持处理

13: 存在带有特殊符号内容的datetime类型的a:fld标签元素
-- 自动处理方式： a:fld标签替换为普通文本
                     * 
                     */
                    void SetAutoHandleUnsupportedElementTypes(const std::vector<int64_t>& _autoHandleUnsupportedElementTypes);

                    /**
                     * 判断参数 AutoHandleUnsupportedElementTypes 是否已赋值
                     * @return AutoHandleUnsupportedElementTypes 是否已赋值
                     * 
                     */
                    bool AutoHandleUnsupportedElementTypesHasBeenSet() const;

                private:

                    /**
                     * 客户的SdkAppId
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 经过URL编码后的PPT文件地址。URL 编码会将字符转换为可通过因特网传输的格式，例如文档地址为http://example.com/测试.pptx，经过URL编码之后为http://example.com/%E6%B5%8B%E8%AF%95.pptx。为了提高URL解析的成功率，请对URL进行编码。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 是否对不支持元素开启自动处理的功能，默认不开启。
true -- 开启
false -- 不开启

当设置为`true`时，可配合`AutoHandleUnsupportedElementTypes`参数使用，具体有哪些不兼容元素类型，可参考`AutoHandleUnsupportedElementTypes`参数的说明。
                     */
                    bool m_autoHandleUnsupportedElement;
                    bool m_autoHandleUnsupportedElementHasBeenSet;

                    /**
                     * 此参数仅在`AutoHandleUnsupportedElement`参数为`true`的情况下有效。

指定需要自动处理的不兼容元素类型，默认对所有不兼容的元素进行自动处理。

目前支持检测的不兼容元素类型及对应的自动处理方式如下：
0: 不支持的墨迹类型
-- 自动处理方式：移除墨迹

1: 自动翻页
-- 自动处理方式：移除自动翻页设置，并修改为单击切换

2: 已损坏音视频
-- 自动处理方式：移除对损坏音视频的引用

3: 不可访问资源
-- 自动处理方式：移除对不可访问的资源的引用

4: 只读文件
-- 自动处理方式：移除只读设置

5: 不支持的元素编辑锁定状态
-- 自动处理方式：移除锁定状态

6: 可能有兼容问题的字体
-- 自动处理方式： 不支持处理

7: 设置了柔化边缘的GIF图片
-- 自动处理方式：移除柔化边缘设置

8: 存在不兼容的空格下划线
-- 自动处理方式：通过调整空格下划线前后文本的字体语言体系，保证空格下划线表现正常

9: 存在设置了分段动画的数学公式和文本混合内容
-- 自动处理方式： 不支持处理

10: 存在设置了分段动画的渐变色文本
-- 自动处理方式： 不支持处理

11: 存在不兼容的分散对齐方式
-- 自动处理方式： 不支持处理

12: 存在不兼容的多倍行距设置
-- 自动处理方式： 不支持处理

13: 存在带有特殊符号内容的datetime类型的a:fld标签元素
-- 自动处理方式： a:fld标签替换为普通文本
                     */
                    std::vector<int64_t> m_autoHandleUnsupportedElementTypes;
                    bool m_autoHandleUnsupportedElementTypesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_CREATEPPTCHECKTASKREQUEST_H_
