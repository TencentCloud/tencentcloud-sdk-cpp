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

#ifndef TENCENTCLOUD_CMS_V20190321_MODEL_CREATEFILESAMPLEREQUEST_H_
#define TENCENTCLOUD_CMS_V20190321_MODEL_CREATEFILESAMPLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cms/v20190321/model/FileSample.h>


namespace TencentCloud
{
    namespace Cms
    {
        namespace V20190321
        {
            namespace Model
            {
                /**
                * CreateFileSample请求参数结构体
                */
                class CreateFileSampleRequest : public AbstractModel
                {
                public:
                    CreateFileSampleRequest();
                    ~CreateFileSampleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取文件类型结构数组
                     * @return Contents 文件类型结构数组
                     */
                    std::vector<FileSample> GetContents() const;

                    /**
                     * 设置文件类型结构数组
                     * @param Contents 文件类型结构数组
                     */
                    void SetContents(const std::vector<FileSample>& _contents);

                    /**
                     * 判断参数 Contents 是否已赋值
                     * @return Contents 是否已赋值
                     */
                    bool ContentsHasBeenSet() const;

                    /**
                     * 获取恶意类型
100：正常
20001：政治
20002：色情 
20006：涉毒违法
20007：谩骂 
24001：暴恐
20105：广告引流
                     * @return EvilType 恶意类型
100：正常
20001：政治
20002：色情 
20006：涉毒违法
20007：谩骂 
24001：暴恐
20105：广告引流
                     */
                    int64_t GetEvilType() const;

                    /**
                     * 设置恶意类型
100：正常
20001：政治
20002：色情 
20006：涉毒违法
20007：谩骂 
24001：暴恐
20105：广告引流
                     * @param EvilType 恶意类型
100：正常
20001：政治
20002：色情 
20006：涉毒违法
20007：谩骂 
24001：暴恐
20105：广告引流
                     */
                    void SetEvilType(const int64_t& _evilType);

                    /**
                     * 判断参数 EvilType 是否已赋值
                     * @return EvilType 是否已赋值
                     */
                    bool EvilTypeHasBeenSet() const;

                    /**
                     * 获取image：图片
                     * @return FileType image：图片
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置image：图片
                     * @param FileType image：图片
                     */
                    void SetFileType(const std::string& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     */
                    bool FileTypeHasBeenSet() const;

                    /**
                     * 获取样本类型
1：黑库
2：白库
                     * @return Label 样本类型
1：黑库
2：白库
                     */
                    uint64_t GetLabel() const;

                    /**
                     * 设置样本类型
1：黑库
2：白库
                     * @param Label 样本类型
1：黑库
2：白库
                     */
                    void SetLabel(const uint64_t& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     */
                    bool LabelHasBeenSet() const;

                private:

                    /**
                     * 文件类型结构数组
                     */
                    std::vector<FileSample> m_contents;
                    bool m_contentsHasBeenSet;

                    /**
                     * 恶意类型
100：正常
20001：政治
20002：色情 
20006：涉毒违法
20007：谩骂 
24001：暴恐
20105：广告引流
                     */
                    int64_t m_evilType;
                    bool m_evilTypeHasBeenSet;

                    /**
                     * image：图片
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * 样本类型
1：黑库
2：白库
                     */
                    uint64_t m_label;
                    bool m_labelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMS_V20190321_MODEL_CREATEFILESAMPLEREQUEST_H_
