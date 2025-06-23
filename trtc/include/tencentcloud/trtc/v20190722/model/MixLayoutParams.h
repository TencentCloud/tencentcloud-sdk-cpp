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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_MIXLAYOUTPARAMS_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_MIXLAYOUTPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/MixLayout.h>
#include <tencentcloud/trtc/v20190722/model/WaterMark.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * 录制的混流布局参数。
                */
                class MixLayoutParams : public AbstractModel
                {
                public:
                    MixLayoutParams();
                    ~MixLayoutParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取布局模式:
1：悬浮布局；
2：屏幕分享布局；
3：九宫格布局；
4：自定义布局；

悬浮布局：默认第一个进入房间的主播（也可以指定一个主播）的视频画面会铺满整个屏幕。其他主播的视频画面从左下角开始依次按照进房顺序水平排列，显示为小画面，小画面悬浮于大画面之上。当画面数量小于等于17个时，每行4个（4 x 4排列）。当画面数量大于17个时，重新布局小画面为每行5个（5 x 5）排列。最多支持25个画面，如果用户只发送音频，仍然会占用画面位置。

屏幕分享布局：指定一个主播在屏幕左侧的大画面位置（如果不指定，那么大画面位置为背景色），其他主播自上而下依次垂直排列于右侧。当画面数量少于17个的时候，右侧每列最多8人，最多占据两列。当画面数量多于17个的时候，超过17个画面的主播从左下角开始依次水平排列。最多支持25个画面，如果主播只发送音频，仍然会占用画面位置。

九宫格布局：根据主播的数量自动调整每个画面的大小，每个主播的画面大小一致，最多支持25个画面。

自定义布局：根据需要在MixLayoutList内定制每个主播画面的布局。
                     * @return MixLayoutMode 布局模式:
1：悬浮布局；
2：屏幕分享布局；
3：九宫格布局；
4：自定义布局；

悬浮布局：默认第一个进入房间的主播（也可以指定一个主播）的视频画面会铺满整个屏幕。其他主播的视频画面从左下角开始依次按照进房顺序水平排列，显示为小画面，小画面悬浮于大画面之上。当画面数量小于等于17个时，每行4个（4 x 4排列）。当画面数量大于17个时，重新布局小画面为每行5个（5 x 5）排列。最多支持25个画面，如果用户只发送音频，仍然会占用画面位置。

屏幕分享布局：指定一个主播在屏幕左侧的大画面位置（如果不指定，那么大画面位置为背景色），其他主播自上而下依次垂直排列于右侧。当画面数量少于17个的时候，右侧每列最多8人，最多占据两列。当画面数量多于17个的时候，超过17个画面的主播从左下角开始依次水平排列。最多支持25个画面，如果主播只发送音频，仍然会占用画面位置。

九宫格布局：根据主播的数量自动调整每个画面的大小，每个主播的画面大小一致，最多支持25个画面。

自定义布局：根据需要在MixLayoutList内定制每个主播画面的布局。
                     * 
                     */
                    uint64_t GetMixLayoutMode() const;

                    /**
                     * 设置布局模式:
1：悬浮布局；
2：屏幕分享布局；
3：九宫格布局；
4：自定义布局；

悬浮布局：默认第一个进入房间的主播（也可以指定一个主播）的视频画面会铺满整个屏幕。其他主播的视频画面从左下角开始依次按照进房顺序水平排列，显示为小画面，小画面悬浮于大画面之上。当画面数量小于等于17个时，每行4个（4 x 4排列）。当画面数量大于17个时，重新布局小画面为每行5个（5 x 5）排列。最多支持25个画面，如果用户只发送音频，仍然会占用画面位置。

屏幕分享布局：指定一个主播在屏幕左侧的大画面位置（如果不指定，那么大画面位置为背景色），其他主播自上而下依次垂直排列于右侧。当画面数量少于17个的时候，右侧每列最多8人，最多占据两列。当画面数量多于17个的时候，超过17个画面的主播从左下角开始依次水平排列。最多支持25个画面，如果主播只发送音频，仍然会占用画面位置。

九宫格布局：根据主播的数量自动调整每个画面的大小，每个主播的画面大小一致，最多支持25个画面。

自定义布局：根据需要在MixLayoutList内定制每个主播画面的布局。
                     * @param _mixLayoutMode 布局模式:
1：悬浮布局；
2：屏幕分享布局；
3：九宫格布局；
4：自定义布局；

悬浮布局：默认第一个进入房间的主播（也可以指定一个主播）的视频画面会铺满整个屏幕。其他主播的视频画面从左下角开始依次按照进房顺序水平排列，显示为小画面，小画面悬浮于大画面之上。当画面数量小于等于17个时，每行4个（4 x 4排列）。当画面数量大于17个时，重新布局小画面为每行5个（5 x 5）排列。最多支持25个画面，如果用户只发送音频，仍然会占用画面位置。

屏幕分享布局：指定一个主播在屏幕左侧的大画面位置（如果不指定，那么大画面位置为背景色），其他主播自上而下依次垂直排列于右侧。当画面数量少于17个的时候，右侧每列最多8人，最多占据两列。当画面数量多于17个的时候，超过17个画面的主播从左下角开始依次水平排列。最多支持25个画面，如果主播只发送音频，仍然会占用画面位置。

九宫格布局：根据主播的数量自动调整每个画面的大小，每个主播的画面大小一致，最多支持25个画面。

自定义布局：根据需要在MixLayoutList内定制每个主播画面的布局。
                     * 
                     */
                    void SetMixLayoutMode(const uint64_t& _mixLayoutMode);

                    /**
                     * 判断参数 MixLayoutMode 是否已赋值
                     * @return MixLayoutMode 是否已赋值
                     * 
                     */
                    bool MixLayoutModeHasBeenSet() const;

                    /**
                     * 获取如果MixLayoutMode 选择为4自定义布局模式的话，设置此参数为每个主播所对应的布局画面的详细信息，最大不超过25个。
                     * @return MixLayoutList 如果MixLayoutMode 选择为4自定义布局模式的话，设置此参数为每个主播所对应的布局画面的详细信息，最大不超过25个。
                     * 
                     */
                    std::vector<MixLayout> GetMixLayoutList() const;

                    /**
                     * 设置如果MixLayoutMode 选择为4自定义布局模式的话，设置此参数为每个主播所对应的布局画面的详细信息，最大不超过25个。
                     * @param _mixLayoutList 如果MixLayoutMode 选择为4自定义布局模式的话，设置此参数为每个主播所对应的布局画面的详细信息，最大不超过25个。
                     * 
                     */
                    void SetMixLayoutList(const std::vector<MixLayout>& _mixLayoutList);

                    /**
                     * 判断参数 MixLayoutList 是否已赋值
                     * @return MixLayoutList 是否已赋值
                     * 
                     */
                    bool MixLayoutListHasBeenSet() const;

                    /**
                     * 获取录制背景颜色，RGB的颜色表的16进制表示，每个颜色通过8bit长度标识，默认为黑色。比如橙色对应的RGB为 R:255 G:165 B:0, 那么对应的字符串描述为#FFA500，格式规范：‘#‘开头，后面跟固定RGB的颜色值
                     * @return BackGroundColor 录制背景颜色，RGB的颜色表的16进制表示，每个颜色通过8bit长度标识，默认为黑色。比如橙色对应的RGB为 R:255 G:165 B:0, 那么对应的字符串描述为#FFA500，格式规范：‘#‘开头，后面跟固定RGB的颜色值
                     * 
                     */
                    std::string GetBackGroundColor() const;

                    /**
                     * 设置录制背景颜色，RGB的颜色表的16进制表示，每个颜色通过8bit长度标识，默认为黑色。比如橙色对应的RGB为 R:255 G:165 B:0, 那么对应的字符串描述为#FFA500，格式规范：‘#‘开头，后面跟固定RGB的颜色值
                     * @param _backGroundColor 录制背景颜色，RGB的颜色表的16进制表示，每个颜色通过8bit长度标识，默认为黑色。比如橙色对应的RGB为 R:255 G:165 B:0, 那么对应的字符串描述为#FFA500，格式规范：‘#‘开头，后面跟固定RGB的颜色值
                     * 
                     */
                    void SetBackGroundColor(const std::string& _backGroundColor);

                    /**
                     * 判断参数 BackGroundColor 是否已赋值
                     * @return BackGroundColor 是否已赋值
                     * 
                     */
                    bool BackGroundColorHasBeenSet() const;

                    /**
                     * 获取在布局模式为1：悬浮布局和 2：屏幕分享布局时，设定为显示大视频画面的UserId。不填的话：悬浮布局默认是第一个进房间的主播，屏幕分享布局默认是背景色
                     * @return MaxResolutionUserId 在布局模式为1：悬浮布局和 2：屏幕分享布局时，设定为显示大视频画面的UserId。不填的话：悬浮布局默认是第一个进房间的主播，屏幕分享布局默认是背景色
                     * 
                     */
                    std::string GetMaxResolutionUserId() const;

                    /**
                     * 设置在布局模式为1：悬浮布局和 2：屏幕分享布局时，设定为显示大视频画面的UserId。不填的话：悬浮布局默认是第一个进房间的主播，屏幕分享布局默认是背景色
                     * @param _maxResolutionUserId 在布局模式为1：悬浮布局和 2：屏幕分享布局时，设定为显示大视频画面的UserId。不填的话：悬浮布局默认是第一个进房间的主播，屏幕分享布局默认是背景色
                     * 
                     */
                    void SetMaxResolutionUserId(const std::string& _maxResolutionUserId);

                    /**
                     * 判断参数 MaxResolutionUserId 是否已赋值
                     * @return MaxResolutionUserId 是否已赋值
                     * 
                     */
                    bool MaxResolutionUserIdHasBeenSet() const;

                    /**
                     * 获取主辅路标识，
0：主流（默认）；
1：辅流（屏幕分享）；
这个位置的MediaId代表的是对应MaxResolutionUserId的主辅路，MixLayoutList内代表的是自定义用户的主辅路。
                     * @return MediaId 主辅路标识，
0：主流（默认）；
1：辅流（屏幕分享）；
这个位置的MediaId代表的是对应MaxResolutionUserId的主辅路，MixLayoutList内代表的是自定义用户的主辅路。
                     * 
                     */
                    uint64_t GetMediaId() const;

                    /**
                     * 设置主辅路标识，
0：主流（默认）；
1：辅流（屏幕分享）；
这个位置的MediaId代表的是对应MaxResolutionUserId的主辅路，MixLayoutList内代表的是自定义用户的主辅路。
                     * @param _mediaId 主辅路标识，
0：主流（默认）；
1：辅流（屏幕分享）；
这个位置的MediaId代表的是对应MaxResolutionUserId的主辅路，MixLayoutList内代表的是自定义用户的主辅路。
                     * 
                     */
                    void SetMediaId(const uint64_t& _mediaId);

                    /**
                     * 判断参数 MediaId 是否已赋值
                     * @return MediaId 是否已赋值
                     * 
                     */
                    bool MediaIdHasBeenSet() const;

                    /**
                     * 获取图片的url地址，只支持jpg, png, jpeg，大小限制不超过5M。注意，url必须携带格式后缀，url内只支持特定的字符串, 范围是a-z A-Z 0-9 '-', '.', '_', '~', ':', '/', '?', '#', '[', ']' '@', '!', '&', '(', ')', '*', '+', ',', '%', '='
                     * @return BackgroundImageUrl 图片的url地址，只支持jpg, png, jpeg，大小限制不超过5M。注意，url必须携带格式后缀，url内只支持特定的字符串, 范围是a-z A-Z 0-9 '-', '.', '_', '~', ':', '/', '?', '#', '[', ']' '@', '!', '&', '(', ')', '*', '+', ',', '%', '='
                     * 
                     */
                    std::string GetBackgroundImageUrl() const;

                    /**
                     * 设置图片的url地址，只支持jpg, png, jpeg，大小限制不超过5M。注意，url必须携带格式后缀，url内只支持特定的字符串, 范围是a-z A-Z 0-9 '-', '.', '_', '~', ':', '/', '?', '#', '[', ']' '@', '!', '&', '(', ')', '*', '+', ',', '%', '='
                     * @param _backgroundImageUrl 图片的url地址，只支持jpg, png, jpeg，大小限制不超过5M。注意，url必须携带格式后缀，url内只支持特定的字符串, 范围是a-z A-Z 0-9 '-', '.', '_', '~', ':', '/', '?', '#', '[', ']' '@', '!', '&', '(', ')', '*', '+', ',', '%', '='
                     * 
                     */
                    void SetBackgroundImageUrl(const std::string& _backgroundImageUrl);

                    /**
                     * 判断参数 BackgroundImageUrl 是否已赋值
                     * @return BackgroundImageUrl 是否已赋值
                     * 
                     */
                    bool BackgroundImageUrlHasBeenSet() const;

                    /**
                     * 获取设置为1时代表启用占位图功能，0时代表不启用占位图功能，默认为0。启用占位图功能时，在预设位置的用户没有上行音视频时可显示对应的占位图。
                     * @return PlaceHolderMode 设置为1时代表启用占位图功能，0时代表不启用占位图功能，默认为0。启用占位图功能时，在预设位置的用户没有上行音视频时可显示对应的占位图。
                     * 
                     */
                    uint64_t GetPlaceHolderMode() const;

                    /**
                     * 设置设置为1时代表启用占位图功能，0时代表不启用占位图功能，默认为0。启用占位图功能时，在预设位置的用户没有上行音视频时可显示对应的占位图。
                     * @param _placeHolderMode 设置为1时代表启用占位图功能，0时代表不启用占位图功能，默认为0。启用占位图功能时，在预设位置的用户没有上行音视频时可显示对应的占位图。
                     * 
                     */
                    void SetPlaceHolderMode(const uint64_t& _placeHolderMode);

                    /**
                     * 判断参数 PlaceHolderMode 是否已赋值
                     * @return PlaceHolderMode 是否已赋值
                     * 
                     */
                    bool PlaceHolderModeHasBeenSet() const;

                    /**
                     * 获取背景画面宽高比不一致的时候处理方案，与MixLayoutList定义的RenderMode一致。
                     * @return BackgroundImageRenderMode 背景画面宽高比不一致的时候处理方案，与MixLayoutList定义的RenderMode一致。
                     * 
                     */
                    uint64_t GetBackgroundImageRenderMode() const;

                    /**
                     * 设置背景画面宽高比不一致的时候处理方案，与MixLayoutList定义的RenderMode一致。
                     * @param _backgroundImageRenderMode 背景画面宽高比不一致的时候处理方案，与MixLayoutList定义的RenderMode一致。
                     * 
                     */
                    void SetBackgroundImageRenderMode(const uint64_t& _backgroundImageRenderMode);

                    /**
                     * 判断参数 BackgroundImageRenderMode 是否已赋值
                     * @return BackgroundImageRenderMode 是否已赋值
                     * 
                     */
                    bool BackgroundImageRenderModeHasBeenSet() const;

                    /**
                     * 获取子画面占位图url地址，只支持jpg, png, jpeg，大小限制不超过5M。注意，url必须携带格式后缀，url内只支持特定的字符串, 范围是a-z A-Z 0-9 '-', '.', '_', '~', ':', '/', '?', '#', '[', ']' '@', '!', '&', '(', ')', '*', '+', ',', '%', '='
                     * @return DefaultSubBackgroundImage 子画面占位图url地址，只支持jpg, png, jpeg，大小限制不超过5M。注意，url必须携带格式后缀，url内只支持特定的字符串, 范围是a-z A-Z 0-9 '-', '.', '_', '~', ':', '/', '?', '#', '[', ']' '@', '!', '&', '(', ')', '*', '+', ',', '%', '='
                     * 
                     */
                    std::string GetDefaultSubBackgroundImage() const;

                    /**
                     * 设置子画面占位图url地址，只支持jpg, png, jpeg，大小限制不超过5M。注意，url必须携带格式后缀，url内只支持特定的字符串, 范围是a-z A-Z 0-9 '-', '.', '_', '~', ':', '/', '?', '#', '[', ']' '@', '!', '&', '(', ')', '*', '+', ',', '%', '='
                     * @param _defaultSubBackgroundImage 子画面占位图url地址，只支持jpg, png, jpeg，大小限制不超过5M。注意，url必须携带格式后缀，url内只支持特定的字符串, 范围是a-z A-Z 0-9 '-', '.', '_', '~', ':', '/', '?', '#', '[', ']' '@', '!', '&', '(', ')', '*', '+', ',', '%', '='
                     * 
                     */
                    void SetDefaultSubBackgroundImage(const std::string& _defaultSubBackgroundImage);

                    /**
                     * 判断参数 DefaultSubBackgroundImage 是否已赋值
                     * @return DefaultSubBackgroundImage 是否已赋值
                     * 
                     */
                    bool DefaultSubBackgroundImageHasBeenSet() const;

                    /**
                     * 获取水印布局参数， 最多支持25个。
                     * @return WaterMarkList 水印布局参数， 最多支持25个。
                     * 
                     */
                    std::vector<WaterMark> GetWaterMarkList() const;

                    /**
                     * 设置水印布局参数， 最多支持25个。
                     * @param _waterMarkList 水印布局参数， 最多支持25个。
                     * 
                     */
                    void SetWaterMarkList(const std::vector<WaterMark>& _waterMarkList);

                    /**
                     * 判断参数 WaterMarkList 是否已赋值
                     * @return WaterMarkList 是否已赋值
                     * 
                     */
                    bool WaterMarkListHasBeenSet() const;

                    /**
                     * 获取模板布局下，背景画面宽高比不一致的时候处理方案。自定义布局不生效，与MixLayoutList定义的RenderMode一致。
                     * @return RenderMode 模板布局下，背景画面宽高比不一致的时候处理方案。自定义布局不生效，与MixLayoutList定义的RenderMode一致。
                     * 
                     */
                    uint64_t GetRenderMode() const;

                    /**
                     * 设置模板布局下，背景画面宽高比不一致的时候处理方案。自定义布局不生效，与MixLayoutList定义的RenderMode一致。
                     * @param _renderMode 模板布局下，背景画面宽高比不一致的时候处理方案。自定义布局不生效，与MixLayoutList定义的RenderMode一致。
                     * 
                     */
                    void SetRenderMode(const uint64_t& _renderMode);

                    /**
                     * 判断参数 RenderMode 是否已赋值
                     * @return RenderMode 是否已赋值
                     * 
                     */
                    bool RenderModeHasBeenSet() const;

                    /**
                     * 获取屏幕分享模板有效。设置为1时代表大画面居右，小画面居左布局。默认为0。
                     * @return MaxResolutionUserAlign 屏幕分享模板有效。设置为1时代表大画面居右，小画面居左布局。默认为0。
                     * 
                     */
                    uint64_t GetMaxResolutionUserAlign() const;

                    /**
                     * 设置屏幕分享模板有效。设置为1时代表大画面居右，小画面居左布局。默认为0。
                     * @param _maxResolutionUserAlign 屏幕分享模板有效。设置为1时代表大画面居右，小画面居左布局。默认为0。
                     * 
                     */
                    void SetMaxResolutionUserAlign(const uint64_t& _maxResolutionUserAlign);

                    /**
                     * 判断参数 MaxResolutionUserAlign 是否已赋值
                     * @return MaxResolutionUserAlign 是否已赋值
                     * 
                     */
                    bool MaxResolutionUserAlignHasBeenSet() const;

                private:

                    /**
                     * 布局模式:
1：悬浮布局；
2：屏幕分享布局；
3：九宫格布局；
4：自定义布局；

悬浮布局：默认第一个进入房间的主播（也可以指定一个主播）的视频画面会铺满整个屏幕。其他主播的视频画面从左下角开始依次按照进房顺序水平排列，显示为小画面，小画面悬浮于大画面之上。当画面数量小于等于17个时，每行4个（4 x 4排列）。当画面数量大于17个时，重新布局小画面为每行5个（5 x 5）排列。最多支持25个画面，如果用户只发送音频，仍然会占用画面位置。

屏幕分享布局：指定一个主播在屏幕左侧的大画面位置（如果不指定，那么大画面位置为背景色），其他主播自上而下依次垂直排列于右侧。当画面数量少于17个的时候，右侧每列最多8人，最多占据两列。当画面数量多于17个的时候，超过17个画面的主播从左下角开始依次水平排列。最多支持25个画面，如果主播只发送音频，仍然会占用画面位置。

九宫格布局：根据主播的数量自动调整每个画面的大小，每个主播的画面大小一致，最多支持25个画面。

自定义布局：根据需要在MixLayoutList内定制每个主播画面的布局。
                     */
                    uint64_t m_mixLayoutMode;
                    bool m_mixLayoutModeHasBeenSet;

                    /**
                     * 如果MixLayoutMode 选择为4自定义布局模式的话，设置此参数为每个主播所对应的布局画面的详细信息，最大不超过25个。
                     */
                    std::vector<MixLayout> m_mixLayoutList;
                    bool m_mixLayoutListHasBeenSet;

                    /**
                     * 录制背景颜色，RGB的颜色表的16进制表示，每个颜色通过8bit长度标识，默认为黑色。比如橙色对应的RGB为 R:255 G:165 B:0, 那么对应的字符串描述为#FFA500，格式规范：‘#‘开头，后面跟固定RGB的颜色值
                     */
                    std::string m_backGroundColor;
                    bool m_backGroundColorHasBeenSet;

                    /**
                     * 在布局模式为1：悬浮布局和 2：屏幕分享布局时，设定为显示大视频画面的UserId。不填的话：悬浮布局默认是第一个进房间的主播，屏幕分享布局默认是背景色
                     */
                    std::string m_maxResolutionUserId;
                    bool m_maxResolutionUserIdHasBeenSet;

                    /**
                     * 主辅路标识，
0：主流（默认）；
1：辅流（屏幕分享）；
这个位置的MediaId代表的是对应MaxResolutionUserId的主辅路，MixLayoutList内代表的是自定义用户的主辅路。
                     */
                    uint64_t m_mediaId;
                    bool m_mediaIdHasBeenSet;

                    /**
                     * 图片的url地址，只支持jpg, png, jpeg，大小限制不超过5M。注意，url必须携带格式后缀，url内只支持特定的字符串, 范围是a-z A-Z 0-9 '-', '.', '_', '~', ':', '/', '?', '#', '[', ']' '@', '!', '&', '(', ')', '*', '+', ',', '%', '='
                     */
                    std::string m_backgroundImageUrl;
                    bool m_backgroundImageUrlHasBeenSet;

                    /**
                     * 设置为1时代表启用占位图功能，0时代表不启用占位图功能，默认为0。启用占位图功能时，在预设位置的用户没有上行音视频时可显示对应的占位图。
                     */
                    uint64_t m_placeHolderMode;
                    bool m_placeHolderModeHasBeenSet;

                    /**
                     * 背景画面宽高比不一致的时候处理方案，与MixLayoutList定义的RenderMode一致。
                     */
                    uint64_t m_backgroundImageRenderMode;
                    bool m_backgroundImageRenderModeHasBeenSet;

                    /**
                     * 子画面占位图url地址，只支持jpg, png, jpeg，大小限制不超过5M。注意，url必须携带格式后缀，url内只支持特定的字符串, 范围是a-z A-Z 0-9 '-', '.', '_', '~', ':', '/', '?', '#', '[', ']' '@', '!', '&', '(', ')', '*', '+', ',', '%', '='
                     */
                    std::string m_defaultSubBackgroundImage;
                    bool m_defaultSubBackgroundImageHasBeenSet;

                    /**
                     * 水印布局参数， 最多支持25个。
                     */
                    std::vector<WaterMark> m_waterMarkList;
                    bool m_waterMarkListHasBeenSet;

                    /**
                     * 模板布局下，背景画面宽高比不一致的时候处理方案。自定义布局不生效，与MixLayoutList定义的RenderMode一致。
                     */
                    uint64_t m_renderMode;
                    bool m_renderModeHasBeenSet;

                    /**
                     * 屏幕分享模板有效。设置为1时代表大画面居右，小画面居左布局。默认为0。
                     */
                    uint64_t m_maxResolutionUserAlign;
                    bool m_maxResolutionUserAlignHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_MIXLAYOUTPARAMS_H_
