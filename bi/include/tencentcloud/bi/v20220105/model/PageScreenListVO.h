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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_PAGESCREENLISTVO_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_PAGESCREENLISTVO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bi/v20220105/model/PageScreenVO.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * 页面截图列表
                */
                class PageScreenListVO : public AbstractModel
                {
                public:
                    PageScreenListVO();
                    ~PageScreenListVO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取图片导出类型。base64；url
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PicType 图片导出类型。base64；url
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPicType() const;

                    /**
                     * 设置图片导出类型。base64；url
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _picType 图片导出类型。base64；url
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPicType(const std::string& _picType);

                    /**
                     * 判断参数 PicType 是否已赋值
                     * @return PicType 是否已赋值
                     * 
                     */
                    bool PicTypeHasBeenSet() const;

                    /**
                     * 获取图片列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return List 图片列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PageScreenVO> GetList() const;

                    /**
                     * 设置图片列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _list 图片列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetList(const std::vector<PageScreenVO>& _list);

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     * 
                     */
                    bool ListHasBeenSet() const;

                    /**
                     * 获取异步事务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TranId 异步事务id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTranId() const;

                    /**
                     * 设置异步事务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tranId 异步事务id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTranId(const std::string& _tranId);

                    /**
                     * 判断参数 TranId 是否已赋值
                     * @return TranId 是否已赋值
                     * 
                     */
                    bool TranIdHasBeenSet() const;

                    /**
                     * 获取事务状态
1: 处理中; 2: 处理成功; 3 处理失败(错误内容见外层Msg)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TranStatus 事务状态
1: 处理中; 2: 处理成功; 3 处理失败(错误内容见外层Msg)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTranStatus() const;

                    /**
                     * 设置事务状态
1: 处理中; 2: 处理成功; 3 处理失败(错误内容见外层Msg)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tranStatus 事务状态
1: 处理中; 2: 处理成功; 3 处理失败(错误内容见外层Msg)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTranStatus(const int64_t& _tranStatus);

                    /**
                     * 判断参数 TranStatus 是否已赋值
                     * @return TranStatus 是否已赋值
                     * 
                     */
                    bool TranStatusHasBeenSet() const;

                private:

                    /**
                     * 图片导出类型。base64；url
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_picType;
                    bool m_picTypeHasBeenSet;

                    /**
                     * 图片列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PageScreenVO> m_list;
                    bool m_listHasBeenSet;

                    /**
                     * 异步事务id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tranId;
                    bool m_tranIdHasBeenSet;

                    /**
                     * 事务状态
1: 处理中; 2: 处理成功; 3 处理失败(错误内容见外层Msg)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_tranStatus;
                    bool m_tranStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_PAGESCREENLISTVO_H_
